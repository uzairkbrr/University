// immediately invloked function Expression (IIFE)

(function uzm() {
  console.log("DataBase Connected");
})();
// 1st () is for the definition of function & the second () is for call

// if the first IIFE is not terminated or stopped using ;, then we'll get an error
// because IIFE didn't know where to stop.

// Why we use IIFE ? (interview Q)
// Answer: Sometimes there is a problem from the global polution so IIFE is used in this condition

// we can also pass parameters to IIFE
((name) => {
  console.log(`Hello, ${name}`);
})("Uzair");

// named iife & unnamed iife

(function named() {
  console.log("I'm named iife");
})();

(() => {
  console.log("I'm unnamed iife");
})();
