// Rewrite this if using the conditional operator '?':

let result;

let a = +prompt("Enter A: ");
let b = +prompt("Enter B: ");

if (a + b < 4) {
  result = 'Below';
} else {
  result = 'Over';
}

a + b < 4 ? console.log("Below") : console.log("Over");