// Author: Uzair Ahmad

const numbers = [1,2,3,4,5];

const sum = numbers.reduce((accumulator, currentValue)=>{
    return accumulator + currentValue;
});

console.log(sum);

// working of reduce method
                // accumulator    currentValue   return
// 1st call:-       1                   2           3
// 2nd call:-       3                   3           6
// 3rd call:-       6                   4           10
// 4th call:-       10                  5           15
// 5th call:-       15                  -            -

// the returned value will stored in accumulator(first parameter of function whatever it name is);


const userCart = [
    {productId:1 , productName: "Mobile", price: 10000}, 
    {productId:2 , productName: "Laptop", price: 20000}, 
    {productId:3 , productName: "Tv", price: 15000}, 
]

const totalAmount = userCart.reduce((total, product)=>{
    return total + product.price;
},0);
// 0 is initial value of total (1st parameter of reduce callback function)

console.log(totalAmount); //Output:- 45000