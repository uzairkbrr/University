"use strict";

const user = {
  userName: "Uzair",

  welcome: function () {
    console.log(`Hello, ${this.userName}`);
    console.log(this);
  },
};

// user.welcome();
// user.userName = "Ahmad";
// user.welcome();

// console.log(this);

// function one() {
//   const userName = "Uzair";
//   console.log("One: ", this); // this will not work, this not work in functions
// }

// one();

// const chai = () => {
//   console.log("Chai");
//   console.log("Chai: ", this);
// };

// chai();

// const add = (num1, num2) => {
//   return num1 + num2;
// };

// const add = (num1, num2) => num1 + num2; // implicit return
// console.log(add(5, 8));

// return object from arrow function
// {} is for object && () is for implicit return
const returnObject = () => ({ userName: "Uzair Ahmad" });
console.log(returnObject());
