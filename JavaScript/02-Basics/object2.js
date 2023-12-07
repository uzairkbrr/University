"use strict";

const user = {};

user.name = "Uzair Ahmad";
user.id = 9021;
user.email = "uzairdev8@gmail.com";
user.isLoggesIn = false;

// console.log(user);

const regularUser = {
  fullName: {
    userFullName: {
      firstName: "Uzair",
      lastName: "Ahmad",
    },
  },
};

// console.log(regularUser.fullName?.userFullName?.firstName);

const obj1 = {
  a: 1,
  b: 2,
};

const obj2 = {
  c: 3,
  d: 4,
};

// const obj3 = {obj1, obj2};
// const obj3 = Object.assign(obj1, obj2);
const obj3 = { ...obj1, ...obj2 };
// console.log(obj3);

// console.log(Object.keys(user)); // will give us all the keys of object (in array form)
// console.log(Object.values(user));

// console.log(user.hasOwnProperty("name")); // true
console.log(user.hasOwnProperty("isLogged")); // false
