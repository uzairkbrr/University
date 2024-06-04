// What is the code below going to output?

// 1
console.log( null || 2 || undefined ); // The answer is 2, that’s the first truthy value.


// 2
console.log( console.log(1) || 2 || console.log(3) ); // The answer: first 1, then 2.

// The call to console.log does not return a value. Or, in other words, it returns undefined.

// The first OR || evaluates its left operand console.(1). That shows the first message with 1.
// The console.log returns undefined, so OR goes on to the second operand searching for a truthy value.
// The second operand 2 is truthy, so the execution is halted, 2 is returned and then shown by the outer console.log.
// There will be no 3, because the evaluation does not reach console.log(3)


// 3

console.log( 1 && null && 2 ); // answer: null , because it’s the first falsy value from the list.


// 4 
console.log( null || 2 && 3 || 4 ); // answer: 3
// The precedence of AND && is higher than ||, so it executes first.
// The result of 2 && 3 = 3, so the expression becomes:
//  null || 3 || 4 
// Now the result is the first truthy value: 3.

