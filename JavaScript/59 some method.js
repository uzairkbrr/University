// Author: Uzair Ahmad

const numbers = [1,3,5,8];

// i want to check if any number in array is even ?

//callback function for some method;
// function isEven(num){
//     return num % 2 === 0
// };

// const answer = numbers.some(isEven);
// console.log(answer); 
// Output:- true
// because 1 of the number in array satisfies te condition of some method;

// real life example on some method:-

// i want to check if any product price is greater then 3000
const products = [
    {productId:1, productName: "Mobile", productPrice: 1000},
    {productId:2, productName: "Laptop", productPrice: 2000},
    {productId:3, productName: "Tv", productPrice: 1500},
    {productId:4, productName: "Smart Watch", productPrice: 8500},    
];

// (a)=> a.productPrice > 3000 is arrow function
// it will return true if productPrice is greater then 3000
const answer = products.some((a)=> a.productPrice > 3000);

console.log(answer);
// Output:- true
// because 1 of the product price is 8500 which is greater then 3000


