"use strict";

const score = 200;

const balance = new Number(100);
console.log(score);
console.log(balance);
console.log(balance.toString().length); // number is changed to string data type

console.log(balance.toFixed(2)); // it will give 2 decimal values only

const anotherNumber = 85.58888;
console.log(anotherNumber.toFixed(2));

const hundreds = 10000000000;
console.log(hundreds.toLocaleString("en-pk"));
