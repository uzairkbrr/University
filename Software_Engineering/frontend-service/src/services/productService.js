// import axios from 'axios';

// const API_URL = process.env.REACT_APP_PRODUCT_SERVICE_URL || 'http://product-service:3002';

// export const getProducts = () => {
//   return axios.get(`${API_URL}/api/product`);
// };

import axios from 'axios';

const API_URL = process.env.REACT_APP_PRODUCT_SERVICE_URL || 'http://product-service:3002';

export const getProducts = async () => {
  try {
    const response = await axios.get(`${API_URL}/api/product`);
    return response.data;
  } catch (error) {
    throw new Error('Failed to fetch products');
  }
};