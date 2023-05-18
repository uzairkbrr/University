// Author: Uzair Ahmad

// Hoisting is a behavior in JavaScript where variable and function declarations are moved to the top of their respective scopes during the compilation phase.

// NOTE:-
// only the declarations are hoisted, not the initializations.
// its mean that we cannot do hoisting in function expression and arrow function


hello();

function hello(){
    console.log("Hello World!");
}