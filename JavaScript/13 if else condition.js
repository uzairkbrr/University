// Author: Uzair Ahmad

// if else condition

let age = 20;

if(age >= 18){
    console.log("You are an adult!"); 
}else{
    console.log("You are not an adult!");
}


// Write a Js program to check number is even or odd;

// % operator give us remainder;
// for example:-  9 % 2 = 1 ;
//  if we divide 9 by 2 then the remainder is 1;

let myNumber = 85;

if(myNumber % 2 == 0){
    console.log(`${myNumber} is even`);
}else{
    console.log(`${myNumber} is odd`);
}

// truthy and falsy values 


// 1. falsy values :
// In JavaScript, a falsy value is a value that is considered false when evaluated in a Boolean context

// some of the falsy values are as follow :
// 1. false
// 2. ""
// 3. null
// 4. undefined
// 5. 0
// 6. Nan

let myName = "";
if(myName){
    console.log(myName);
}else{
    console.log("Name is a kind of empty");
}

// 2. truthy values :
// In JavaScript, a truthy value is a value that is considered true when evaluated in a Boolean context. Specifically, any value that is not one of the six falsy values (false, 0, NaN, null, undefined, or '') is considered truthy

let test = "abc";

// the below condition will display truthy value on console because test is a string variable and we store some values in it so it will be considered as truthy value

if(test){
    console.log("truthy value");
}else{
    console.log("falsy value");
}