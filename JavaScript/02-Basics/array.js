"use strict";

let myArray = [0, 1, 2, 3, 4, 5];
let myArray2 = new Array(1, 2, 3, 4);
// shallow copy : property share the same reference

//  Array methods
// myArray.push(6); // add new element at the end of array
// myArray.push(7);
// myArray.pop(); // remove the last element from the array

// myArray.unshift(8); // add new element at start of the array
// myArray.unshift(5);
// myArray.shift(); // remove starting value / element from the array
// myArray.shift();
// myArray.shift();
// myArray.shift();

// console.log(myArray.includes(9));
// console.log(myArray.indexOf(9));
// console.log(typeof newArray);

const newArray = myArray.join(); // array will be converted into string

// slice , splice

console.log("Slice:-");
console.log("A: ", myArray);
const mna1 = myArray.slice(1, 3);
console.log("Slice:", mna1);
console.log("B:", myArray);

const mna2 = myArray.splice(1, 3);
console.log("Splice: ", mna2);
console.log("C: ", myArray);
