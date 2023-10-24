"use strict";

let name = new String("Uzair Ahmad");
// console.log(name.length);
// console.log(name.toUpperCase()); // original string will not be changed
// console.log(name.charAt(2)); // which char at index 2
// console.log(name.indexOf("a"));

let newString = name.substring(0, 6);
console.log(newString);

let anotherString = name.slice(0, 5);
console.log(anotherString);

const Name = "          Uzair  ";
// console.log(Name.trim()); // trim remove starting and ending space from the string
// console.log(Name.trim().replace("e", "a"));

let combineName = "Uzair-Ahmad-Khan-Lala-Chacha";
const array = combineName.split("-");
console.log(array);
