import React, { useState, useEffect } from 'react';
import { Link } from 'react-router-dom';
import { getProducts } from '../services/productService';
import { addToCart } from '../services/orderService';
import '../assets/css/styles.css';

const ProductList = () => {
  const [products, setProducts] = useState([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  useEffect(() => {
    const fetchProducts = async () => {
      try {
        const response = await getProducts();
        setProducts(response.data || []);
        setLoading(false);
      } catch (err) {
        setError('Failed to load products. Please try again.');
        setLoading(false);
      }
    };
    fetchProducts();
  }, []);

  const handleAddToCart = async (productId) => {
    try {
      await addToCart({ productId, quantity: 1 });
      alert('Product added to cart!');
    } catch (err) {
      setError('Failed to add product to cart.');
    }
  };

  if (loading) return <div className="product-list">Loading...</div>;
  if (error) return <div className="product-list">{error}</div>;

  return (
    <div className="container">
      <h2>Products</h2>
      {products.length === 0 ? (
        <p>No products available. Check back later!</p>
      ) : (
        <div className="product-list">
          {products.map(product => (
            <div key={product.id} className="product-card">
              {product.image && (
                <img src={product.image} alt={product.name} />
              )}
              <h3>{product.name}</h3>
              <p>${product.price.toFixed(2)}</p>
              <p>{product.description || 'No description available.'}</p>
              <button onClick={() => handleAddToCart(product.id)}>
                Add to Cart
              </button>
              <Link to={`/cart`}>View Cart</Link>
            </div>
          ))}
        </div>
      )}
    </div>
  );
};

export default ProductList;