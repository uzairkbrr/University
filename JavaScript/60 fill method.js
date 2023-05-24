// Author: Uzair Ahmad

// The fill method in JavaScript is a way to modify an array by filling it with a specified value. 
// It takes one or two arguments: the first argument is the value to fill the array with, and the second (optional) argument is the starting index from which to fill the array.

const myArray = [1,2,3,4,5,6,7,8,9,10];

// 0 is the value to fill 
// 2 is starting index
// 5 is ending index but 5th index will not be included
// it will fill 0 from 2nd index to 4th index
// Mathematical Calculation :- ( 5-2 = 3) only fill 3 indexes with give value 0;

myArray.fill(0, 2, 5);

console.log(myArray);