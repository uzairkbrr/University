// Author: Uzair Ahmad 

// How to clone array :
// clone mean copy one array to another one;
// cloning an array means creating a new array that contains all the elements of the original array. The new array is a separate instance in memory, meaning that modifications to the new array won't affect the original array, and vice versa.

let array1 = ["item1", "item2"];

// slice method give us particular part of string slice(starting index, ending index);
// in below line of code we didn't mention ending index to slice method so it will give all the values from index 0 to last index of array1;
// Then we will storing the value in array2;

// so by doing we can create two arrays, so modification in any array coulfn't affect other array;
// There are Three methods for doing this :-
// 1. slice() method
//  let array2 = array1.slice(0);
// 2. Create empty array and concatenate array1 with it;
// let array2 = [].concat(array1);

// 3. spread operator :- 
// the three dots (...) will spread all the values of array1 so its becomes the values of array2 as well
let array2 = [...array1];

// adding "item3" to the end of array2 
// to verify that it will not affect our array1 ;
array2.push("item3");

console.log(array1); // Ouput :- "item1", "item2"
console.log(array2); // Output :- "item1", "item2", "item3";