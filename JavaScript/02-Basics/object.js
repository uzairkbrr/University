"use strict";

// object literals

// keys and values pair in object

const mySymbol = Symbol("Key1");

const user = {
  name: "Uzair",
  fullName: "Uzair Ahmad", // this will only access by using []
  [mySymbol]: "myKey1", // this is used as symbol in the object
  age: 19,
  lcoation: "Islamabad",
  email: "uzairdev8@gmail.com",
  isLoggedIn: false,
};

// console.log(user.name);
// console.log(user["fullName"]);
// console.log(user["email"]);
// console.log(user[mySymbol]);

user.greeting = function () {
  console.log("Hello User !");
};

user.greetingUser = function () {
  console.log(`Hello ${this["fullName"]}`);
};

user.greeting();
user.greetingUser();

Object.freeze(user); // No changes will be done after this

// Object.create(); // constructor
