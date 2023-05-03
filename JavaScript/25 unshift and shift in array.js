// Author: Uzair Ahmad 

// unshift:-
// This method will add new value at the starting of array
// we can also add multiple values at same time;

let fruits = ["apple", "mango", "grapes"];
fruits.unshift("banana", "Strawberry");

console.log(fruits);
// Output:- banana, strawberry, apple, mango, grapes;

// shift:-
// This method is used to remove values from starting of array
// this method will also return the values which its remove from array;

console.log(fruits.shift()); // Ouput :- banana;
console.log(fruits); // Ouput :- strawberry, apple, mango, grapes;
