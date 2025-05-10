import axios from 'axios';

const API_URL = process.env.REACT_APP_SHIPPING_SERVICE_URL || 'http://shipping-service:3005';

export const createShipment = (shipmentData) => {
  return axios.post(`${API_URL}/api/shipping/create`, shipmentData);
};

export const getShipmentStatus = (orderId) => {
  return axios.get(`${API_URL}/api/shipping/status/${orderId}`);
};