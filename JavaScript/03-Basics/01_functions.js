"use strict";

function sayMyName() {
  console.log("U");
  console.log("Z");
  console.log("A");
  console.log("I");
  console.log("R");
}

// sayMyName ; Refrence
// sayMyName(); // execution

function addTwoNumbers(num1, num2) {
  console.log(num1 + num2);
}

// addTwoNumbers(5, 8);

function loginUserMessege(userName = "Uzair") {
  // default parameter, this will execute when user didn't give any parameter to function
  if (!userName) {
    // !username => userName === undefined
    // undefined is falsy value (so I want to execute this block of statement when userName is undefined) that's why I convert false into true
    return `Please Enter a UserName`;
  }
  return `${userName} Just Logged In`;
}

console.log(loginUserMessege("Uzair"));
