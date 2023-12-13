"use strict";

function calculateCartPrice(...numbers) {
  // ...numbers is called rest operator
  return numbers;
}

// console.log(calculateCartPrice(100, 150, 200, 250, 300));

// sending object into function
const user = {
  name: "Uzair",
  email: "uzairdev8@gamil.com",
};

function handleObject(anyObject) {
  console.log(
    `UserName is ${anyObject.name} & his email is ${anyObject.email}`
  );
}

// handleObject(user);

function returnSecondValue(myArray) {
  return myArray[1];
}

console.log(returnSecondValue([5, 8, 13]));
