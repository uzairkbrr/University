"use strict";

let myDate = new Date();
// console.log(myDate.toString());
// console.log(myDate.toDateString());
// console.log(myDate.toLocaleString());
// console.log(myDate.toISOString());
// console.log(myDate.toTimeString());
// console.log(typeof myDate); // object

let myCreatedDate = new Date(2023, 7, 7);
// console.log(myCreatedDate.toDateString());

let myTimeStamp = Date.now();
// console.log(myTimeStamp);

// console.log(Math.floor(Date.now() / 1000)); // convert the milliseconds into seconds

let newDate = new Date();
console.log(newDate);
console.log(newDate.getDay());
console.log(newDate.getMonth() + 1);
console.log(newDate.getFullYear());
