from fastapi import FastAPI, HTTPException, Header
from pydantic import BaseModel
from pymongo import MongoClient
import httpx
import uuid
from datetime import datetime
from typing import List
import os

app = FastAPI(title="Order Service")

# Environment variables for service URLs
PRODUCT_SERVICE_URL = os.getenv("PRODUCT_SERVICE_URL", "")
# http://product-service:8001
PAYMENT_SERVICE_URL = os.getenv("PAYMENT_SERVICE_URL", "")
# http://payment-service:8080
SHIPPING_SERVICE_URL = os.getenv("SHIPPING_SERVICE_URL", "http://shipping-service:3000")  # Updated to match port 3000
NOTIFICATION_SERVICE_URL = os.getenv("NOTIFICATION_SERVICE_URL", "http://notification-service:3005")

# MongoDB connection
client = MongoClient(os.getenv("MONGO_URL", "mongodb://mongo:27017"))
db = client["ecommerce"]
orders_collection = db["orders"]

# Pydantic models
class OrderItem(BaseModel):
    product_id: str
    quantity: int

class OrderCreate(BaseModel):
    items: List[OrderItem]

class OrderResponse(BaseModel):
    order_id: str
    user_id: str
    items: List[OrderItem]
    total_amount: float
    status: str
    created_at: str

# Helper function to check inventory
async def check_inventory(items: List[OrderItem]) -> float:
    total_amount = 0.0
    async with httpx.AsyncClient() as client:
        for item in items:
            try:
                response = await client.get(f"{PRODUCT_SERVICE_URL}/products/{item.product_id}")
                response.raise_for_status()
            except httpx.HTTPStatusError as e:
                raise HTTPException(status_code=400, detail=f"Product {item.product_id} not found")
            product = response.json()
            if product["stock"] < item.quantity:
                raise HTTPException(status_code=400, detail=f"Insufficient stock for product {item.product_id}")
            total_amount += product["price"] * item.quantity
            try:
                await client.patch(
                    f"{PRODUCT_SERVICE_URL}/products/{item.product_id}/stock",
                    json={"quantity": -item.quantity}
                )
            except httpx.HTTPStatusError as e:
                raise HTTPException(status_code=500, detail="Failed to update inventory")
    return total_amount

# Helper function to process payment
async def process_payment(order_id: str, total_amount: float):
    async with httpx.AsyncClient() as client:
        try:
            response = await client.post(
                f"{PAYMENT_SERVICE_URL}/payments",
                json={"order_id": order_id, "amount": total_amount}
            )
            response.raise_for_status()
            return response.json()
        except httpx.HTTPStatusError as e:
            raise HTTPException(status_code=400, detail="Payment failed")

# Helper function to initiate shipping
async def initiate_shipping(order_id: str, user_id: str, items: List[OrderItem]):
    async with httpx.AsyncClient() as client:
        try:
            shipping_data = {
                "order_id": order_id,
                "user_id": user_id,
                "items": [{"product_id": item.product_id, "quantity": item.quantity} for item in items]
            }
            response = await client.post(f"{SHIPPING_SERVICE_URL}/shipments", json=shipping_data)
            response.raise_for_status()
            return response.json()
        except httpx.HTTPStatusError as e:
            raise HTTPException(status_code=400, detail="Shipping initiation failed")

# Optional helper function to notify (if required by assignment)
async def notify_service(order_id: str, user_id: str):
    async with httpx.AsyncClient() as client:
        try:
            notify_data = {"order_id": order_id, "user_id": user_id, "status": "confirmed"}
            response = await client.post(f"{NOTIFICATION_SERVICE_URL}/notifications", json=notify_data)
            response.raise_for_status()
            return response.json()
        except httpx.HTTPStatusError as e:
            raise HTTPException(status_code=400, detail="Notification failed")

@app.post("/orders", response_model=OrderResponse)
async def create_order(order: OrderCreate, x_user_id: str = Header(...)):
    order_id = str(uuid.uuid4())
    
    try:
        # Step 1: Check inventory and calculate total
        total_amount = await check_inventory(order.items)
        
        # Step 2: Process payment
        await process_payment(order_id, total_amount)
        
        # Step 3: Create order in database
        order_data = {
            "order_id": order_id,
            "user_id": x_user_id,
            "items": [item.dict() for item in order.items],
            "total_amount": total_amount,
            "status": "confirmed",
            "created_at": datetime.utcnow().isoformat() + "Z"
        }
        await orders_collection.insert_one(order_data)
        
        # Step 4: Initiate shipping
        await initiate_shipping(order_id, x_user_id, order.items)
        
        # Optional: Notify user (uncomment if required)
        # await notify_service(order_id, x_user_id)
        
        return OrderResponse(**order_data)
    
    except HTTPException as e:
        # Rollback inventory on failure
        async with httpx.AsyncClient() as client:
            for item in order.items:
                try:
                    await client.patch(
                        f"{PRODUCT_SERVICE_URL}/products/{item.product_id}/stock",
                        json={"quantity": item.quantity}  # Restore stock
                    )
                except httpx.HTTPStatusError:
                    pass  # Log error in production
        raise e

@app.get("/orders/{order_id}", response_model=OrderResponse)
async def get_order(order_id: str, x_user_id: str = Header(...)):
    order = orders_collection.find_one({"order_id": order_id, "user_id": x_user_id})
    if not order:
        raise HTTPException(status_code=404, detail="Order not found")
    return OrderResponse(**order)

@app.get("/orders", response_model=List[OrderResponse])
async def list_orders(x_user_id: str = Header(...)):
    orders = orders_collection.find({"user_id": x_user_id})
    return [OrderResponse(**order) for order in orders]

if __name__ == "__main__":
    import uvicorn
    uvicorn.run(app, host="0.0.0.0", port=8000)