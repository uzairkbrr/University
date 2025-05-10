E-commerce Order Processing System: Front-End/User Service
This repository contains the Front-End/User Service for an E-commerce Order Processing System. It is a React-based web application with an Express server, designed to interact with microservices (Auth, Product, Order, Payment, Shipping, and Notification Services) via REST APIs. The application supports user authentication, product browsing, cart management, checkout, and order tracking, all running in a Dockerized environment.
Features

User Authentication: Register and login functionality (/register, /login).
Product Browsing: View a list of products (/products).
Cart Management: Add, update, and remove items from the cart (/cart).
Checkout: Process payments and create shipments (/checkout).
Order Tracking: View order and shipping status (/order-status/:orderId).
Responsive Design: Styled with CSS for desktop and mobile devices.
Microservices Architecture: Communicates with backend services via a proxy server.

Project Structure
frontend-user-service/
├── src/
│   ├── components/          # React components (Login.js, ProductList.js, etc.)
│   ├── services/           # API service files (authService.js, orderService.js, etc.)
│   ├── assets/css/         # Global styles (styles.css)
│   ├── App.js              # Main app with routing
│   ├── App.css             # App-specific styles
│   ├── index.js            # React entry point
│   ├── index.css           # Global styles
├── server/
│   ├── index.js            # Express server
│   ├── routes/api.js       # API proxy routes
│   ├── middleware/cors.js  # CORS middleware
├── public/
│   ├── index.html          # HTML template
│   ├── manifest.json       # Web app manifest
│   ├── favicon.ico         # Favicon
├── .env                    # Environment variables (not committed)
├── .gitignore              # Git ignore patterns
├── Dockerfile              # Docker configuration
├── docker-compose.yml      # Docker Compose configuration
├── package.json            # Dependencies and scripts
├── README.md               # Project documentation

Prerequisites

Node.js: Version 18.x or higher
Docker: Latest version with Docker Compose
Git: For cloning the repository
npm: Included with Node.js

Installation

Clone the Repository:
git clone <repository-url>
cd frontend-user-service


Install Dependencies:
npm install


Set Up Environment Variables:

Create a .env file in the root directory with the following:REACT_APP_API_BASE_URL=http://localhost:3000/api
REACT_APP_AUTH_SERVICE_URL=http://auth-service:3001
REACT_APP_PRODUCT_SERVICE_URL=http://product-service:3002
REACT_APP_ORDER_SERVICE_URL=http://order-service:3003
REACT_APP_PAYMENT_SERVICE_URL=http://payment-service:3004
REACT_APP_SHIPPING_SERVICE_URL=http://shipping-service:3005
REACT_APP_NOTIFICATION_SERVICE_URL=http://notification-service:3006


Note: The .env file is ignored by .gitignore for security.


Mock Microservices (Optional):

If microservices (auth-service, product-service, etc.) are not available, use json-server to mock them:npm install -g json-server


Create mock data files (e.g., auth.json, products.json) and run:json-server --watch auth.json --port 3001 --routes routes.json


Repeat for other services on ports 3002–3006.





Running the Application
Local Development

Start the development server:npm run dev


Open http://localhost:3000 in a browser.
Ensure microservices or mocks are running on ports 3001–3006.

Production with Docker

Build and run the containers:docker-compose up --build


Access the app at http://localhost:3000.
Verify microservices are running or mocked in docker-compose.yml.

Build for Production

Build the React app:npm run build


Start the Express server:npm start


Access at http://localhost:3000.

Usage

Register: Navigate to /register to create an account.
Login: Go to /login to authenticate.
Browse Products: Visit /products to view available products.
Manage Cart: Add items to /cart, update quantities, or remove items.
Checkout: Proceed to /checkout to process payment and shipping.
Track Orders: Check order status at /order-status/:orderId.

Testing

Unit Tests (placeholder):
npm test


Note: Add test files and configure Jest/Cypress for comprehensive testing.


End-to-End Testing:

Use browser dev tools to verify API calls (e.g., /api/auth/login, /api/product).
Test the full flow: register, login, browse, cart, checkout, and order status.


Mock Testing:

Use json-server to mock microservices (see Installation section).
Update docker-compose.yml to include mock services if needed.



Troubleshooting

API Errors: Ensure microservices are running on ports 3001–3006 or mocked correctly.
Docker Issues: Check logs with docker-compose logs frontend-user-service.
Environment Variables: Verify .env or docker-compose.yml has correct URLs.
CORS Issues: Confirm server/middleware/cors.js is configured properly.

Next Steps

Notifications: Implement src/components/Notifications.js to display notifications using notificationService.js.
Authentication: Add route protection in App.js (e.g., require login for /checkout).
Testing: Set up Jest/Cypress for unit and end-to-end tests.
Microservices: Provide Dockerfiles for auth-service, product-service, etc.

License
ISC License
Contact
For issues or contributions, please open a GitHub issue or pull request.
