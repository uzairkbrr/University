"use strict";

const myarr = [1, 2, 3];
const myarr2 = [4, 5, 6];

// both the methods are same in this senerio
// myarr.push(myarr2);
// myarr2 will be the 4th element of myarr.
// console.log(newArr[3][1]); // accessing 5

const newArr = myarr.concat(myarr2);
console.log(newArr);

// I can also achieve this by using spread operator

const newArr2 = [...myarr, ...myarr2];
console.log(newArr2);

const another_Array = [1, 2, 3, [4, 5, 6], 7, [8, [9, 10]]];
const realAnotherArray = another_Array.flat(Infinity);
console.log(realAnotherArray);

console.log(Array.from("Uzair"));
console.log(Array.from({ name: "Uzair" })); // intresting (IMP)
// compiler will be confused between keys & value.
// We have to tell the compiler to make array from keys or values
