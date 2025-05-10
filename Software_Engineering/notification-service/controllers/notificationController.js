const { MongoClient } = require("mongodb");
const dotenv = require("dotenv");
dotenv.config();

class NotificationController {
  constructor() {
    this.client = new MongoClient(process.env.MONGO_URI);
    this.db = null;
    this.collection = null;
    this.connectToDatabase();
  }

  async connectToDatabase() {
    try {
      await this.client.connect();
      this.db = this.client.db();
      this.collection = this.db.collection("notifications");
      console.log("Connected to MongoDB");
    } catch (error) {
      console.error("MongoDB connection error:", error);
    }
  }

  async sendOrderNotification(req, res) {
    const { orderId, userId, message } = req.body;
    const notification = {
      type: "order",
      orderId,
      userId,
      message,
      timestamp: new Date(),
    };
    try {
      await this.collection.insertOne(notification);
      console.log(
        `Order Notification: ${message} (Order ID: ${orderId}, User ID: ${userId})`
      );
      res.status(200).json({ success: true, notification });
    } catch (error) {
      console.error("Error inserting order notification:", error);
      res
        .status(500)
        .json({ success: false, error: "Failed to send notification" });
    }
  }

  async sendShippingNotification(req, res) {
    const { orderId, userId, status, trackingId } = req.body;
    const notification = {
      type: "shipping",
      orderId,
      userId,
      status,
      trackingId,
      timestamp: new Date(),
    };
    try {
      await this.collection.insertOne(notification);
      console.log(
        `Shipping Notification: ${status} (Order ID: ${orderId}, Tracking ID: ${trackingId})`
      );
      res.status(200).json({ success: true, notification });
    } catch (error) {
      console.error("Error inserting shipping notification:", error);
      res
        .status(500)
        .json({ success: false, error: "Failed to send notification" });
    }
  }
}

module.exports = new NotificationController();
