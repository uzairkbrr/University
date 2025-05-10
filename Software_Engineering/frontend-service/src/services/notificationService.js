import axios from 'axios';

const API_URL = process.env.REACT_APP_NOTIFICATION_SERVICE_URL || 'http://notification-service:3006';

export const getNotifications = async () => {
  return axios.get(`${API_URL}/api/notification`);
};