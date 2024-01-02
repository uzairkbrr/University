"use strict";

// switch (key) {
//   case value:
//     break;

//   default:
//     break;
// }

let month = 8;

switch (month) {
  case 1:
    console.log("January");
    break;
  case 2:
    console.log("Feburary");
    break;
  case 3:
    console.log("March");
    break;
  case 4:
    console.log("April");
    break;
  case 8:
    console.log("August");
    break;
  default:
    console.log("Default Case Match");
    break;
}

// Interview Question: What if We didn't write "break" in cases of switch statment
// Answer: All the cases will be executed except default
