import axios from 'axios';

const API_URL = process.env.REACT_APP_PAYMENT_SERVICE_URL || 'http://payment-service:3004';

export const processPayment = (paymentData) => {
  return axios.post(`${API_URL}/api/payment/process`, paymentData);
};