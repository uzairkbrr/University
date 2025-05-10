Notification Service Microservice
Overview
The Notification Service is a microservice designed to handle notifications for an e-commerce system. It provides endpoints to send order confirmation and shipping status notifications, logging them in memory and returning a success response. This service is part of a larger microservices architecture for a class project (BCS-6A, SE).
Features

Order Confirmation Notifications: Logs and responds to order confirmation messages.
Shipping Status Notifications: Logs and responds to shipping updates with tracking information.
In-Memory Logging: Stores notification history in memory (can be extended to a database or file).
REST API: Exposes endpoints for other microservices (e.g., Order Service, Shipping Service) to send notifications.

Project Structure
notification-service/
├── controllers/
│   └── notificationController.js  # Handles notification logic
├── routes/
│   └── notificationRoutes.js      # Defines API routes
├── .env                           # Environment variables (e.g., PORT)
├── index.js                       # Main entry point
├── package.json                   # Dependencies and scripts
└── docker-compose.yml             # Docker configuration

Prerequisites

Node.js: Version 20.x or higher (tested with v22.15.0).
npm: For installing dependencies.
Docker: Optional, for running the service in a container.
Postman: Recommended for testing API endpoints.

Setup Instructions
1. Clone the Repository
If this service is part of a larger repository, clone it to your local machine:
git clone <repository-url>
cd notification-service

2. Install Dependencies
Install the required Node.js packages:
npm install

This will install express, dotenv, and nodemon.
3. Configure Environment Variables
Create or update the .env file in the root directory with the following:
PORT=3005

Note: If port 3005 is frequently in use, change it to 3006 (or another unique port) to avoid conflicts.
4. Run the Service Locally
Start the service in development mode using nodemon:
npm run dev


The service will run on http://localhost:3005 (or http://localhost:3006 if you changed the port).
Expected terminal output:[nodemon] starting `node index.js`
notificationController: NotificationController { notificationLog: [] }
Notification Service running on port 3005



5. Run with Docker (Optional)
If you prefer to run the service in a Docker container:

Ensure Docker Desktop is running.
Build and run the container:docker-compose up --build


The service will be available at http://localhost:3005 (or the port specified in docker-compose.yml).
To stop the container:docker-compose down



API Endpoints
Health Check

URL: GET /
Response:{ "message": "Notification Service is running" }



Order Confirmation Notification

URL: POST /api/notifications/order
Body:{
  "orderId": "123",
  "userId": "user1",
  "message": "Your order has been confirmed!"
}


Response:{
  "success": true,
  "notification": {
    "type": "order",
    "orderId": "123",
    "userId": "user1",
    "message": "Your order has been confirmed!",
    "timestamp": "2025-05-03T29:05:13.975Z"
  }
}


Terminal Log:Order Notification: Your order has been confirmed! (Order ID: 123, User ID: user1)



Shipping Status Notification

URL: POST /api/notifications/shipping
Body:{
  "orderId": "123",
  "userId": "user1",
  "status": "Shipped",
  "trackingId": "TRACK123"
}


Response:{
  "success": true,
  "notification": {
    "type": "shipping",
    "orderId": "123",
    "userId": "user1",
    "status": "Shipped",
    "trackingId": "TRACK123",
    "timestamp": "<some-date>"
  }
}


Terminal Log:Shipping Notification: Shipped (Order ID: 123, Tracking ID: TRACK123)



Integration with Other Microservices
This section explains how other microservices (e.g., Order Service, Shipping Service) can connect to the Notification Service to send notifications.
Base URL

The Notification Service runs on http://localhost:3005 by default (or http://localhost:3006 if the port was changed in .env).
Ensure the Notification Service is running before sending requests.

Sending Notifications from Other Microservices
Other microservices should send HTTP POST requests to the appropriate endpoints with the required JSON payload. Below are the details for each endpoint:
Order Confirmation Notification

Endpoint: POST /api/notifications/order
Payload:
orderId (string): The ID of the order.
userId (string): The ID of the user.
message (string): The notification message (e.g., "Your order has been confirmed!").


Example Request (Node.js using axios):const axios = require('axios');

const notifyOrder = async () => {
  try {
    const response = await axios.post('http://localhost:3005/api/notifications/order', {
      orderId: '123',
      userId: 'user1',
      message: 'Your order has been confirmed!'
    });
    console.log('Notification sent:', response.data);
  } catch (error) {
    console.error('Failed to send notification:', error.message);
  }
};

notifyOrder();


Expected Response:
Status: 200 OK
Body:{
  "success": true,
  "notification": {
    "type": "order",
    "orderId": "123",
    "userId": "user1",
    "message": "Your order has been confirmed!",
    "timestamp": "2025-05-03T29:05:13.975Z"
  }
}




Error Handling:
If the Notification Service is down, the request will fail. Implement retry logic or error handling in your microservice:if (error.response) {
  console.error('Notification Service error:', error.response.status, error.response.data);
} else {
  console.error('Notification Service unavailable:', error.message);
}





Shipping Status Notification

Endpoint: POST /api/notifications/shipping
Payload:
orderId (string): The ID of the order.
userId (string): The ID of the user.
status (string): The shipping status (e.g., "Shipped").
trackingId (string): The tracking ID for the shipment.


Example Request (Node.js using axios):const axios = require('axios');

const notifyShipping = async () => {
  try {
    const response = await axios.post('http://localhost:3005/api/notifications/shipping', {
      orderId: '123',
      userId: 'user1',
      status: 'Shipped',
      trackingId: 'TRACK123'
    });
    console.log('Shipping notification sent:', response.data);
  } catch (error) {
    console.error('Failed to send shipping notification:', error.message);
  }
};

notifyShipping();


Expected Response:
Status: 200 OK
Body:{
  "success": true,
  "notification": {
    "type": "shipping",
    "orderId": "123",
    "userId": "user1",
    "status": "Shipped",
    "trackingId": "TRACK123",
    "timestamp": "<some-date>"
  }
}




Error Handling:
Handle potential failures (e.g., service down, network issues) as shown in the Order Notification example.



Integration Tips

Port Conflicts: Ensure the port (3005 or 3006) is unique across all microservices. Coordinate with the team to assign ports (e.g., 3001 for Auth, 3002 for Order, etc.).
Service Discovery (Future): If deployed in a production-like environment, consider using a service discovery tool (e.g., Eureka) or environment variables to dynamically set the Notification Service URL.
Retries and Fallbacks: Implement retry logic in your microservices to handle temporary failures of the Notification Service.
Testing: Test the full flow (e.g., Order Service → Notification Service) after integration.

Testing
Use Postman or curl to test the endpoints:
Test Health Check
curl http://localhost:3005/

Test Order Notification
curl -X POST http://localhost:3005/api/notifications/order -H "Content-Type: application/json" -d "{\"orderId\":\"123\",\"userId\":\"user1\",\"message\":\"Your order has been confirmed!\"}"

Test Shipping Notification
curl -X POST http://localhost:3005/api/notifications/shipping -H "Content-Type: application/json" -d "{\"orderId\":\"123\",\"userId\":\"user1\",\"status\":\"Shipped\",\"trackingId\":\"TRACK123\"}"

Troubleshooting
Port Conflict (EADDRINUSE)
If you see Error: listen EADDRINUSE: address already in use :::3005:

Find the Process:netstat -a -n -o | findstr :3005


Look for a PID (e.g., 9948).


Terminate the Process:taskkill /PID 9948 /F


Retry:npm run dev


Permanent Fix: Change the port in .env to 3006 (or another unique port) to avoid conflicts:PORT=3006



TypeError (Cannot read properties of undefined)
If you encounter TypeError: Cannot read properties of undefined (reading 'notificationLog'):

Verify controllers/notificationController.js exports an instance:module.exports = new NotificationController();


Clear the Node.js cache and reinstall dependencies:Remove-Item -Path node_modules,package-lock.json -Recurse -Force
npm install
npm run dev



Future Enhancements

Email Notifications: Integrate nodemailer to send real email notifications.
Install: npm install nodemailer


Input Validation: Add checks for required fields in API requests.
Persistent Storage: Save notificationLog to a database (e.g., MongoDB) or file.
API Documentation: Add Swagger documentation (swagger.yml).

Notes for Team

Integration: Use the above endpoints in the Order Service and Shipping Service to send notifications.
Port Assignment: Ensure no other microservice uses port 3005 (or 3006 if changed). Suggested ports:
Auth Service: 3001
Order Service: 3002
Shipping Service: 3003
Notification Service: 3005 or 3006


Testing: Test the full system flow (e.g., Order Service → Notification Service) after integration.

Contact
For issues or enhancements, contact Ali Jaffar (class BCS-6A, SE).
