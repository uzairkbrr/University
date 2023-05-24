// Author: Uzair Ahmad

const numbers = [8,5,85,19,20];

// assending order sorting
// numbers.sort((a,b)=>{
//     return a-b;
// });
// explanation of the above function:-
// if a-b > 0 then place b at first ( 9-5 = 4 , its mean a(9) - b(5) > 0 so b(5) will be placed first)
// if a-b < 0 then place a at first ( 5-9 = -4 , its mean a(5) - b(5) < 0 so a(5) will be placed first)

// descending order sorting
// numbers.sort((a,b)=>{
//     return b-a;
// });

// same explanation as above


// console.log(numbers);

// real life example:-
// if you note on any e-commerce website there is an option of price (Low-to-High , High-to-Low);
// let write a code for it

const products = [
    {productId:1, productName: "Mobile", productPrice: 1000},
    {productId:2, productName: "Laptop", productPrice: 2000},
    {productId:3, productName: "Tv", productPrice: 1500},
    {productId:4, productName: "Smart Watch", productPrice: 800},    
];

// use slice(0) because we dont want to make changes in our orignal products
// so in LowToHigh object there will be sorted elements according to its price from low to high;

const LowToHigh = products.slice(0).sort((a,b)=>{
    // a and b will behave like and object so we access its data member using dot ( . ) operator;
    return a.productPrice - b.productPrice;
});

console.log(LowToHigh);

const HighToLow = products.slice(0).sort((a,b)=>{
    return b.productPrice - a.productPrice;
});

console.log(HighToLow);

// at the end the products object remains the same beacuse we are cloning the object to LowToHigh and HighToLow when sorting it;

