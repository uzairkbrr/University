// Author: Uzair Ahmad

// "and" "or" operator ;

// In JavaScript, the logical AND (&&) and logical OR (||) operators are used to combine two or more Boolean expressions and return a Boolean value based on the result of the evaluation;

// 1. and operator:-
// The logical AND (&&) operator returns true if all of the operands/conditions are true, and if any of the condition is false then it return false;

let firstName = "Uzair";
let age = 20;

if(firstName[0] === "U" && age >= 18){
    console.log("Your name starts with U and you are an adult!");
}else{
    console.log("Error because any of the condition inside if is false !");
}


// 2. or operator:-
// The logical OR (||) operator returns true if at least one of the operands is true, otherwise it will return false if no one condition is true;

if(firstName[0] === "U" || age >= 18){
    console.log("Your name starts with U and you are an adult!");
}else{
    console.log("Error because any of the condition inside if is false !");
}
