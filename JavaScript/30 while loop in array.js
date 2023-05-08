// Auhtor: Uzair Ahmad

let fruits = ["apple", "banana", "grapes", "mango"];

// printing the elements of array
let i=0;
while(i < fruits.length){
    console.log(fruits[i].toUpperCase());
    i++;
}   

// cloning this array to another one using while loop

let newArray = [];

// cloaning fruits to newArray 
let j=0;
while(j < fruits.length){
    newArray.push(fruits[j].toUpperCase());
    j++;
}   

console.log(newArray);

// printing newArray using while loop
let k=0;
while(k<newArray.length){
    console.log(newArray[k]);
    k++;
}
