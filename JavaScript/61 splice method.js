// Author: Uzair Ahmad

// The splice method in JavaScript is a way to modify an array by adding or removing elements.
// It takes one or more arguments: the first argument is the starting index from which to modify the array,
// the second argument is the number of elements to remove (if any),
// and any additional arguments are elements to add to the array (if any).
// Note:- splice method will affect our origional array;

const myArray = ["item1", "item2", "item3"];

// deleting an element from array
// first 1 mean that to delete from 1st index.
// second 1 means that we want to delete only 1 element from the array
// we can't assign/insert any value to that index again so it will simply deleted 
const ans = myArray.slice(0).splice(1,1);

console.log(myArray);
//Output:- item1 , item2 , item3
// our original array didn't get affected because we use slice method which will clone the value to it

console.log(ans); 
//Output:- item2
// by the use of slice method we just get "item2" in it because its the value which is on 1st index in our array


// inserting an element in array

// it will insert a new element on 1st index named "inserted item";
// 0 means that we don't want to delete anything from array
myArray.splice(1,0,'inserted item');
console.log(myArray);
//Output:- item1 , inserted item , item2 , item3

// Now to delete and insert combinely

myArray.splice(0,1,'new inserted item');

console.log(myArray);
//Output:- new inserted item, inserted item, item2, item3