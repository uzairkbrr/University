import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { getCart, updateCartItem, removeCartItem } from '../services/orderService';
import '../assets/css/styles.css';

const Cart = () => {
  const [cartItems, setCartItems] = useState([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

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

  const handleQuantityChange = async (itemId, quantity) => {
    if (quantity < 1) return;
    try {
      await updateCartItem(itemId, { quantity });
      setCartItems(cartItems.map(item =>
        item.id === itemId ? { ...item, quantity } : item
      ));
    } catch (err) {
      setError('Failed to update quantity.');
    }
  };

  const handleRemoveItem = async (itemId) => {
    try {
      await removeCartItem(itemId);
      setCartItems(cartItems.filter(item => item.id !== itemId));
    } catch (err) {
      setError('Failed to remove item.');
    }
  };

  const calculateTotal = () => {
    return cartItems.reduce((total, item) => total + item.price * item.quantity, 0).toFixed(2);
  };

  if (loading) return <div className="cart">Loading...</div>;
  if (error) return <div className="cart">{error}</div>;

  return (
    <div className="cart">
      <h2>Your Cart</h2>
      {cartItems.length === 0 ? (
        <p>Your cart is empty. <Link to="/products">Shop now!</Link></p>
      ) : (
        <>
          <div className="cart-items">
            {cartItems.map(item => (
              <div key={item.id} className="product-card">
                <h3>{item.name}</h3>
                <p>Price: ${item.price.toFixed(2)}</p>
                <div className="form-group">
                  <label>Quantity:</label>
                  <input
                    type="number"
                    value={item.quantity}
                    onChange={(e) => handleQuantityChange(item.id, parseInt(e.target.value))}
                    min="1"
                  />
                </div>
                <p>Total: ${(item.price * item.quantity).toFixed(2)}</p>
                <button onClick={() => handleRemoveItem(item.id)}>Remove</button>
              </div>
            ))}
          </div>
          <div className="cart-summary">
            <h3>Total: ${calculateTotal()}</h3>
            <Link to="/checkout">
              <button>Proceed to Checkout</button>
            </Link>
          </div>
        </>
      )}
    </div>
  );
};

export default Cart;