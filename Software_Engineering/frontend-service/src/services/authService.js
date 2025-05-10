import axios from 'axios';

const API_URL = process.env.REACT_APP_AUTH_SERVICE_URL || 'http://auth-service:3001';

export const login = async (email, password) => {
  return axios.post(`${API_URL}/api/auth/login`, { email, password });
};

export const register = async (userData) => {
  return axios.post(`${API_URL}/api/auth/register`, userData);
};