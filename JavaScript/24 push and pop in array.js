// Author: Uzair Ahmad 

// array push pop:-
// if we want to add anything (value) to our array so the push method is used for it;
// push method will add value to our array at its end;


let fruits = ["apple", "mango", "grapes"];

console.log("Before pushing the values of array is " + fruits);
// Output:- Before pushing the values of array is apple,mango,grapes;

// Push :-
fruits.push("banana");

console.log("After pushing the values of array is " + fruits);
// Output:- After pushing the values of array is apple,mango,grapes,banana;

// Pop:-
// if we want to remove any value from our array 
// pop method also return the value which it removes from array;
let poppedFruit = fruits.pop();
console.log(poppedFruit);
// Ouput:- banana

console.log(fruits);
// Ouput:- apple,mango,grapes 