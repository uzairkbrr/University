# Use Node.js base image
FROM node:18-alpine

# Set working directory
WORKDIR /app

# Copy package.json and package-lock.json
COPY package*.json ./

# Install dependencies
RUN npm install

# Copy source code
COPY . .

# Build the React app
RUN npm run build

# Expose port 3000 for the Express server
EXPOSE 3000

# Start the Express server
CMD ["node", "server/index.js"]