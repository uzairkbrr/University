// const express = require('express');
// const axios = require('axios');
// const router = express.Router();

// // Service URLs from environment variables
// const SERVICES = {
//   auth: process.env.AUTH_SERVICE_URL || 'http://auth-service:3001',
//   product: process.env.PRODUCT_SERVICE_URL || 'http://product-service:3002',
//   order: process.env.ORDER_SERVICE_URL || 'http://order-service:3003',
//   payment: process.env.PAYMENT_SERVICE_URL || 'http://payment-service:3004',
//   shipping: process.env.SHIPPING_SERVICE_URL || 'http://shipping-service:3005',
//   notification: process.env.NOTIFICATION_SERVICE_URL || 'http://notification-service:3006',
// };

// // Proxy route for Auth Service
// router.use('/auth', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.auth}${req.originalUrl.replace('/api/auth', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Auth Service request failed',
//     });
//   }
// });

// // Proxy route for Product Service
// router.use('/product', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.product}${req.originalUrl.replace('/api/product', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Product Service request failed',
//     });
//   }
// });

// // Proxy route for Order Service
// router.use('/order', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.order}${req.originalUrl.replace('/api/order', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Order Service request failed',
//     });
//   }
// });

// // Proxy route for Payment Service
// router.use('/payment', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.payment}${req.originalUrl.replace('/api/payment', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Payment Service request failed',
//     });
//   }
// });

// // Proxy route for Shipping Service
// router.use('/shipping', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.shipping}${req.originalUrl.replace('/api/shipping', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Shipping Service request failed',
//     });
//   }
// });

// // Proxy route for Notification Service
// router.use('/notification', async (req, res) => {
//   try {
//     const response = await axios({
//       method: req.method,
//       url: `${SERVICES.notification}${req.originalUrl.replace('/api/notification', '')}`,
//       data: req.body,
//       headers: {
//         ...req.headers,
//         host: undefined,
//         connection: undefined,
//       },
//     });
//     res.status(response.status).json(response.data);
//   } catch (error) {
//     res.status(error.response?.status || 500).json({
//       error: error.message,
//       details: error.response?.data || 'Notification Service request failed',
//     });
//   }
// });

// module.exports = router;


const express = require('express');
const axios = require('axios');
const router = express.Router();

const AUTH_SERVICE_URL = process.env.REACT_APP_AUTH_SERVICE_URL || 'http://auth-service:3001';
const PRODUCT_SERVICE_URL = process.env.REACT_APP_PRODUCT_SERVICE_URL || 'http://product-service:3002';
const ORDER_SERVICE_URL = process.env.REACT_APP_ORDER_SERVICE_URL || 'http://order-service:3003';
const PAYMENT_SERVICE_URL = process.env.REACT_APP_PAYMENT_SERVICE_URL || 'http://payment-service:3004';
const SHIPPING_SERVICE_URL = process.env.REACT_APP_SHIPPING_SERVICE_URL || 'http://shipping-service:3005';
const NOTIFICATION_SERVICE_URL = process.env.REACT_APP_NOTIFICATION_SERVICE_URL || 'http://notification-service:3006';

// Proxy middleware
const proxy = (url) => async (req, res) => {
  try {
    const response = await axios({
      method: req.method,
      url: `${url}${req.url}`,
      data: req.body,
      headers: req.headers,
    });
    res.status(response.status).json(response.data);
  } catch (error) {
    res.status(error.response?.status || 500).json({ message: error.message });
  }
};

// Routes
router.use('/auth', proxy(AUTH_SERVICE_URL));
router.use('/product', proxy(PRODUCT_SERVICE_URL));
router.use('/order', proxy(ORDER_SERVICE_URL));
router.use('/payment', proxy(PAYMENT_SERVICE_URL));
router.use('/shipping', proxy(SHIPPING_SERVICE_URL));
router.use('/notification', proxy(NOTIFICATION_SERVICE_URL));

module.exports = router;