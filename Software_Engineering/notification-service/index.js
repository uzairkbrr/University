const express = require('express');
  const dotenv = require('dotenv');

  // Load environment variables from .env file
  dotenv.config();

  const app = express();
  const PORT = process.env.PORT || 3005;

  // Middleware to parse JSON bodies
  app.use(express.json());

  // Import routes
  const notificationRoutes = require('./routes/notificationRoutes');
  app.use('/api/notifications', notificationRoutes);

  // Basic route for health check
  app.get('/', (req, res) => {
    res.status(200).json({ message: 'Notification Service is running' });
  });

  // Start the server after a short delay to ensure DB connection
  const startServer = () => {
    app.listen(PORT, () => {
      console.log(`Notification Service running on port ${PORT}`);
    });
  };
  setTimeout(startServer, 2000); // 2-second delay