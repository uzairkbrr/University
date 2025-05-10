import React, { useState, useEffect } from 'react';
import { getNotifications } from '../services/notificationService';
import '../assets/css/styles.css';

const Notifications = () => {
  const [notifications, setNotifications] = useState([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  useEffect(() => {
    const fetchNotifications = async () => {
      try {
        const response = await getNotifications();
        setNotifications(response.data || []);
        setLoading(false);
      } catch (err) {
        setError('Failed to load notifications. Please try again.');
        setLoading(false);
      }
    };
    fetchNotifications();
  }, []);

  if (loading) return <div className="container">Loading...</div>;
  if (error) return <div className="container error">{error}</div>;

  return (
    <div className="container">
      <h2>Notifications</h2>
      {notifications.length === 0 ? (
        <p>No notifications available.</p>
      ) : (
        <ul className="notification-list">
          {notifications.map(notification => (
            <li key={notification.id} className="notification-item">
              <p><strong>{notification.type}:</strong> {notification.message}</p>
              <p><small>{new Date(notification.createdAt).toLocaleString()}</small></p>
            </li>
          ))}
        </ul>
      )}
    </div>
  );
};

export default Notifications;