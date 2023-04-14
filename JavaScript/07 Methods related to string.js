// Author: Uzair Ahmad

// trim()
// toLowerCase()
// toUpperCase()
// slice()

// 1st :- trim()

// let firstName = "    Uzair    ";
// console.log(firstName);
// console.log(firstName.length);

// trim() is method is used to remove all the spaces from string 
// syntax of using trim() method 
// this will give us string without spaces but we need to store that new string in another string;

// let newString = firstName.trim();
// console.log(newString);
// console.log(newString.length);

// we can also store the new string in same variable;
// for example:-
// firstName = firstName.trim();
// console.log(firstName);
// console.log(firstName.length);

// 2nd :- toUpperCase()

// toUpperCase() method is used to changed all the alphabets of string to Uppercase;
// it will also give us new string with uppercase so the method of storing that string is same as above ;

// let firstName = "uzair";
// firstName = firstName.toUpperCase();

// console.log(firstName);

// 3rd :- toLowerCase()

// toLowerCase() method is used to changes all the alphabets of string into Lowercase;
// it will also give us new string with lowercase so the method of storing that string is same as others;

// let firstName = "UZAIR";
// firstName = firstName.toLowerCase();

// console.log(firstName);

// 4th :- slice 

// slice method is used to get particular alphabets from string;
// for example :-

let firstName = "UzairAhmad";

// slice(starting index, ending index);

// starting index = from where you want alphabets of your string;
// ending index = till you want to get alphabets;

// the below line will give us from index 0 to index 5 ; 6th index will not be included;
let newString = firstName.slice(0,5);

console.log(newString);