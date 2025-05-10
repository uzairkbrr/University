import React, { useState, useEffect } from 'react';
import { useParams } from 'react-router-dom';
import { getOrder } from '../services/orderService';
import { getShipmentStatus } from '../services/shippingService';
import '../assets/css/styles.css';

const OrderStatus = () => {
  const { orderId } = useParams();
  const [order, setOrder] = useState(null);
  const [shippingStatus, setShippingStatus] = useState(null);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  useEffect(() => {
    const fetchOrderDetails = async () => {
      try {
        const orderResponse = await getOrder(orderId);
        const shipmentResponse = await getShipmentStatus(orderId);
        setOrder(orderResponse.data);
        setShippingStatus(shipmentResponse.data);
        setLoading(false);
      } catch (err) {
        setError('Failed to load order status. Please try again.');
        setLoading(false);
      }
    };
    fetchOrderDetails();
  }, [orderId]);

  if (loading) return <div className="order-status">Loading...</div>;
  if (error) return <div className="order-status">{error}</div>;
  if (!order) return <div className="order-status">Order not found.</div>;

  return (
    <div className="order-status">
      <h2>Order Status</h2>
      <div className="order-details">
        <h3>Order #{orderId}</h3>
        <p><strong>Total:</strong> ${order.total.toFixed(2)}</p>
        <p><strong>Payment Status:</strong> {order.paymentStatus || 'Completed'}</p>
        <p><strong>Shipping Status:</strong> {shippingStatus?.status || 'Pending'}</p>
        <h4>Items</h4>
        <div className="order-items">
          {order.items.map(item => (
            <div key={item.id} className="product-card">
              <h4>{item.name}</h4>
              <p>Price: ${item.price.toFixed(2)}</p>
              <p>Quantity: {item.quantity}</p>
              <p>Total: ${(item.price * item.quantity).toFixed(2)}</p>
            </div>
          ))}
        </div>
        <h4>Shipping Details</h4>
        <p><strong>Address:</strong> {shippingStatus?.address || 'N/A'}</p>
        <p><strong>City:</strong> {shippingStatus?.city || 'N/A'}</p>
        <p><strong>Postal Code:</strong> {shippingStatus?.postalCode || 'N/A'}</p>
        <p><strong>Country:</strong> {shippingStatus?.country || 'N/A'}</p>
      </div>
    </div>
  );
};

export default OrderStatus;