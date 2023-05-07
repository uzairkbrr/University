// Author: Uzair Ahmad

const fruits = ["apple", "mango"] ; 
// fruits is array so it is created in heap memory 
// const is pointing to its address from main memory 

// it allow us to add new elements 
// because we don't change const variable array
// we just add an element to its end in heap memory 
// it will go to its address and add the element to its end 
// it does not mean that we are adding new element to const array
// we add this element to array in heap memory using its address 
fruits.push("grapes");

// we can use all the methods related to array (push(),pop(),shift(),unshift() etc etc);

console.log(fruits);

// the below line will now give us error because we are tryping to overwrite the values of const variable 
// fruits = ["pineapple"];

// NOTE:-
// its good programming practise to create an array using "const" datatype 
// 90% of developer use "const" datatype for array 
// because it will never allow you to redeclare and reassign new values to it
// we can do but using array methods;
