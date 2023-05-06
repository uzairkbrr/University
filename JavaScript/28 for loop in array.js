// Author: Uzair Ahmad 

let fruits = ["apple", "mango", "banana", "grapes"];

let fruits2 = [];

// coping 1 array to another using for loop
for(let i = 0; i<fruits.length; i++){
    fruits2.push(fruits[i].toUpperCase());
    
    // fruits2[i] = fruits[i].toUpperCase();
}

console.log(fruits2);
