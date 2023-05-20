// Author: Uzair Ahmad

// let and const are block scope
// var is function scope

// block == {}
{
    // we cannot access this variable from outside the block "{ }"
    let firstName = "Uzair";
    console.log(firstName); //Output:- Uzair
}

// console.log(firstName); // it will give us error because "let" is block scope and it is not accessable from outside the blocks

{
    // this firstName variable is different from the above one because both has different scope
    let firstName = "Ahmad";
    console.log(firstName); //Output:- Ahmad
}

{
    // we can access this firstName from outside this block 
    // because var is function scope variable
    var firstName = "Uzair";
}

console.log(firstName); //Output:- Uzair