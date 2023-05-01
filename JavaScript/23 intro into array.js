// Author: Uzair Ahmad 


// intro into arrays :
// An array is a data structure that allows you to store a collection of values, such as numbers or strings, in a single variable. Arrays are declared using square brackets [], and each value in the array is separated by a comma.

// how to create array 
let fruits = ["apple","mango","grapes"];

// this will print all the values inside fruits array
console.log(fruits);

// if we want to print any one value from our array so we need to mark its index;
// for example:-
console.log(fruits[0]); // Output :- apple
console.log(fruits[1]); // Output :- mango
console.log(fruits[2]); // Output :- grapes

// we can also update the values of array 
// for example:-
// i don't like mango's so i want to change it 
fruits[1] = "banana";

console.log(fruits);
// Output :- apple, banana, grapes 

// we can also store mixed data types values in array :
// for example:-
let mixed = [1, 2.9, "uzair", null, undefined]; 

// array indexing :-
// When an array is created in memory, the values are stored in contiguous blocks of memory addresses. The index of an element in the array is used to calculate the memory address of that element in memory. In many programming languages, the memory address of the first element of an array is used as the base address, and the index is used to calculate the offset from that base address.

