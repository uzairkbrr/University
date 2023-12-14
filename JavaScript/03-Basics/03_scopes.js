"user strict";

let a = 58;
const b = 20;
// var c = 30;
// var made alot of bugs in our code

if (true) {
  let a = 10;
  //  const b = 20;
  //  var c = 30;

  console.log("Inner: ", a);
}
// {} ; for our understanding let assume {} is scope

console.log(a);
// console.log(b);
// console.log(c);
