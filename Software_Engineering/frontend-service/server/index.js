const express = require('express');
const path = require('path');
const cors = require('./middleware/cors');
const apiRoutes = require('./routes/api');

const app = express();

// Middleware
app.use(cors);
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

// API routes
app.use('/api', apiRoutes);

// Serve static files from the React app
app.use(express.static(path.join(__dirname, '../build')));

// Handle all other requests by serving the React app
app.get('*', (req, res) => {
  res.sendFile(path.join(__dirname, '../build', 'index.html'));
});

// Error handling middleware
app.use((err, req, res, next) => {
  console.error(err.stack);
  res.status(500).json({ error: 'Internal Server Error', details: err.message });
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Frontend service running on port ${PORT}`);
});