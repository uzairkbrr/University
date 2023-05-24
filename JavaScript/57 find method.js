// Author: Uzair Ahmad

// The find() method in JavaScript is used to search through an array and return the first element that meets a certain condition.
// It takes a callback function as its argument and applies that function to each element in the array until it finds the first element that satisfies the condition. 
// If such an element is found, it is returned by the method. If no such element is found, it returns undefined.

// const myArray = ["hello", "cat", "dog", "Uzair"];

// // callback function for find method
// function isLength(string){
//     return string.length === 3;
// };

// find method will give us the first element of above array when its length is equal to 3
// only return the first occurence element of array 
// if no such element found then it will return "undefined"
// const ans = myArray.find(isLength);

// console.log(ans); //Output:- cat

// real life example on find method :-

const users = [
    {Id:1, Name:"Uzair"},
    {Id:2, Name:"Ahmad"},
    {Id:3, Name:"Uzm"},
];

// (users) => users.Id === 3 is arrow function
// it will return the user whose id is equal to 3

const ans = users.find( (users) => users.Id === 3 );

console.log(ans); // Output:- {Id:3 , Name: Uzm};