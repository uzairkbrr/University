"use strict";

// let userEmail = "uzairdev8@gmail.com";
// in real projects, we get the userEmail from the dataBase. So we don't know if there exist an email or not.

// if (userEmail) {
//   console.log("Got User Email");
// } else {
//   console.log("Don't have User Email");
// }

// if user email found in the dataBase then if statment will be executed.
// if user email is not found in the DB then it will returned empty string "". Which is falsy value. In this case, else statment will be executed

// Falsy Values
//  false, 0, -0, BigInt 0n, "", null, undefined, NaN

// Truthy Values
// "0", "false", " ", [], {}, function(){}

// How to check if array & object is empty or not
// const array = [];
// const object = {};

// if (array.length === 0) {
//   console.log("Array is Empty !");
// }
// if (Object.keys(object).length === 0) {
//   console.log("Object is Empty !");
// }

// NULL // Nullish Coalescing Operator (??) : null, undefined

// let value;
// value = 5 ?? 8;
// console.log(value);
// value = null ?? 5;
// console.log(value);
// value = undefined ?? 8;
// console.log(value);

// Ternary Operator
let iceCreamPrice = 50;
iceCreamPrice << 80
  ? console.log("IceCream Price is Less than 80")
  : console.log("IceCream Price is Greater than 80");
