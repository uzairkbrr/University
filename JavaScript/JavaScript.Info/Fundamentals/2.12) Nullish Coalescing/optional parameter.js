// Develop a function calculateFinalPrice(basePrice, discount) that calculates the final price after applying the discount to the base price. 
// If basePrice is not provided, default it to 0.


function calculateFinalPrice(basePrice = 0, discount) {
    discountedPrice = basePrice  - ( basePrice * discount );
    console.log("Price After Discount: ", discountedPrice); 
}

calculateFinalPrice(10,.10);