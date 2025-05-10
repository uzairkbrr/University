const express = require('express');
const router = express.Router();
const notificationController = require('../controllers/notificationController');

// Debug log to verify the controller
console.log('notificationController:', notificationController);

// Bind methods to ensure proper context
router.post('/order', notificationController.sendOrderNotification.bind(notificationController));
router.post('/shipping', notificationController.sendShippingNotification.bind(notificationController));

module.exports = router;