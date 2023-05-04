// Author: Uzair Ahmad

// Primitive & Refrence Data Type : 

// Primitive Data Type :-
let num1 = 8 ;
let num2 = num1 ;

console.log("Value of num1 is ", num1);
console.log("Value of num2 is ", num2);

num1++ ; // num1 = num1 + 1 ;

// value of num1 is increased from 8 to 9;
// but the value of num2 remains the same because when we assign num1 to num2 on that point num1 is 8;
console.log("Value of num1 is ", num1);
console.log("Value of num2 is ", num2);


// Refrence Data Type :-
// array :
// when we use reference data type then the address of 1st variable will be assign to 2nd variable;
// so that why whenever we commit come changes into variable 1 or variable 2 so values of both variable will be changed;
let array1 = ["item1", "item2"];
let array2 = array1;

console.log(array1);
console.log(array2);

// this will add item0 to the start of array1;
array1.unshift("Item0");
console.log("After adding new item0 to starting of array");
console.log(array1);
console.log(array2);
