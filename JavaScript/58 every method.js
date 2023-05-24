// Author: Uzair Ahmad

// The every() method in JavaScript is used to check if every element in an array satisfies a certain condition.
// It takes a callback function as its argument and applies that function to each element in the array. 
// The method returns true if the function returns a truthy value for every element in the array, otherwise it returns false.
// The every() method does not modify the original array.

// const numbers  = [2,4,6,8,10];

// callback function for every method;
// function isEven(num){
//     return num % 2 === 0;
// }

// every method will check the given callback function condition on every element if its satisfy then it will return true,
// and if any one of the element does not satisfy the condition then it will return false;
// console.log(numbers.every(isEven)); // Output:- true

// real life example on every method:-

const products = [
    {productId:1, productName: "Mobile", productPrice: 1000},
    {productId:2, productName: "Laptop", productPrice: 2000},
    {productId:3, productName: "Tv", productPrice: 1500},
    {productId:4, productName: "Smart Watch", productPrice: 800},    
];

// i want to check that is every product price lesser then 3000 ?
// so lets write a code for it 

// callback function for every method;
function isLesserThen_3k(a){
    return a.productPrice < 3000 ;
};

const ans = products.every(isLesserThen_3k);
console.log(ans); 
//Output: true
// because price of every product is lesser then 3000