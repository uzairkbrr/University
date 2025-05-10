import axios from 'axios';

const API_URL = process.env.REACT_APP_ORDER_SERVICE_URL || 'http://order-service:3003';

export const getCart = () => {
  return axios.get(`${API_URL}/api/order/cart`);
};

export const updateCartItem = (itemId, data) => {
  return axios.put(`${API_URL}/api/order/cart/${itemId}`, data);
};

export const removeCartItem = (itemId) => {
  return axios.delete(`${API_URL}/api/order/cart/${itemId}`);
};

export const createOrder = (orderData) => {
  return axios.post(`${API_URL}/api/order/create`, orderData);
};

export const getOrder = (orderId) => {
  return axios.get(`${API_URL}/api/order/${orderId}`);
};

export const addToCart = (cartData) => {
  return axios.post(`${API_URL}/api/order/cart`, cartData);
};