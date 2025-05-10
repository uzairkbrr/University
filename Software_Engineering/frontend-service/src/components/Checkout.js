import React, { useState, useEffect } from 'react';
import { Link, useNavigate } from 'react-router-dom';
import { getCart, createOrder } from '../services/orderService';
import { processPayment } from '../services/paymentService';
import { createShipment } from '../services/shippingService';
import '../assets/css/styles.css';

const Checkout = () => {
  const [cartItems, setCartItems] = useState([]);
  const [paymentDetails, setPaymentDetails] = useState({
    cardNumber: '',
    expiry: '',
    cvv: '',
  });
  const [shippingDetails, setShippingDetails] = useState({
    address: '',
    city: '',
    postalCode: '',
    country: '',
  });
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);
  const navigate = useNavigate();

  useEffect(() => {
    const fetchCart = async () => {
      try {
        const response = await getCart();
        setCartItems(response.data.items || []);
        setLoading(false);
      } catch (err) {
        setError('Failed to load cart. Please try again.');
        setLoading(false);
      }
    };
    fetchCart();
  }, []);

  const handlePaymentChange = (e) => {
    setPaymentDetails({ ...paymentDetails, [e.target.name]: e.target.value });
  };

  const handleShippingChange = (e) => {
    setShippingDetails({ ...shippingDetails, [e.target.name]: e.target.value });
  };

  const calculateTotal = () => {
    return cartItems.reduce((total, item) => total + item.price * item.quantity, 0).toFixed(2);
  };

  const handleSubmit = async (e) => {
    e.preventDefault();
    setError(null);
    setLoading(true);

    try {
      // Step 1: Process payment
      const paymentResponse = await processPayment({
        amount: calculateTotal(),
        ...paymentDetails,
      });

      if (!paymentResponse.data.success) {
        throw new Error('Payment failed.');
      }

      // Step 2: Create order
      const orderResponse = await createOrder({
        items: cartItems,
        total: calculateTotal(),
        paymentId: paymentResponse.data.paymentId,
      });

      // Step 3: Create shipment
      await createShipment({
        orderId: orderResponse.data.orderId,
        ...shippingDetails,
      });

      // Redirect to order status page
      navigate(`/order-status/${orderResponse.data.orderId}`);
    } catch (err) {
      setError(err.message || 'Failed to complete checkout. Please try again.');
      setLoading(false);
    }
  };

  if (loading) return <div className="checkout">Loading...</div>;
  if (error) return <div className="checkout">{error}</div>;

  return (
    <div className="checkout">
      <h2>Checkout</h2>
      {cartItems.length === 0 ? (
        <p>Your cart is empty. <Link to="/products">Shop now!</Link></p>
      ) : (
        <div className="checkout-container">
          <div className="cart-summary">
            <h3>Order Summary</h3>
            {cartItems.map(item => (
              <div key={item.id} className="product-card">
                <h4>{item.name}</h4>
                <p>Price: ${item.price.toFixed(2)}</p>
                <p>Quantity: {item.quantity}</p>
                <p>Total: ${(item.price * item.quantity).toFixed(2)}</p>
              </div>
            ))}
            <h3>Total: ${calculateTotal()}</h3>
          </div>
          <form className="checkout-form" onSubmit={handleSubmit}>
            <h3>Payment Details</h3>
            <div className="form-group">
              <label>Card Number</label>
              <input
                type="text"
                name="cardNumber"
                value={paymentDetails.cardNumber}
                onChange={handlePaymentChange}
                placeholder="1234 5678 9012 3456"
                required
              />
            </div>
            <div className="form-group">
              <label>Expiry Date</label>
              <input
                type="text"
                name="expiry"
                value={paymentDetails.expiry}
                onChange={handlePaymentChange}
                placeholder="MM/YY"
                required
              />
            </div>
            <div className="form-group">
              <label>CVV</label>
              <input
                type="text"
                name="cvv"
                value={paymentDetails.cvv}
                onChange={handlePaymentChange}
                placeholder="123"
                required
              />
            </div>
            <h3>Shipping Details</h3>
            <div className="form-group">
              <label>Address</label>
              <input
                type="text"
                name="address"
                value={shippingDetails.address}
                onChange={handleShippingChange}
                placeholder="123 Main St"
                required
              />
            </div>
            <div className="form-group">
              <label>City</label>
              <input
                type="text"
                name="city"
                value={shippingDetails.city}
                onChange={handleShippingChange}
                placeholder="City"
                required
              />
            </div>
            <div className="form-group">
              <label>Postal Code</label>
              <input
                type="text"
                name="postalCode"
                value={shippingDetails.postalCode}
                onChange={handleShippingChange}
                placeholder="12345"
                required
              />
            </div>
            <div className="form-group">
              <label>Country</label>
              <input
                type="text"
                name="country"
                value={shippingDetails.country}
                onChange={handleShippingChange}
                placeholder="Country"
                required
              />
            </div>
            <button type="submit" disabled={loading}>
              {loading ? 'Processing...' : 'Place Order'}
            </button>
          </form>
        </div>
      )}
    </div>
  );
};

export default Checkout;