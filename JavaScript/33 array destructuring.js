// Author: Uzair Ahmad 

const myArray = ["Value1", "Value2", "Value3", "Value4"];

// let var1 = myArray[0];
// let var2 = myArray[1];
// console.log(var1);
// console.log(var2);

// the below code will assign value of index0 to myVar1 and value of index1 to myVar2 and so on;
// ...myNewArray means to assign all the raminging values to myNewArray;
// first it will assign value of index0 and index1 to myVar1 and myVar2 and then rest of the values will bea assigned to myNewArray
let [myVar1, myVar2, ...myNewArray] = myArray;

console.log(myVar1); // Output :- Value1
console.log(myVar2); // Output :- Value2
console.log(myNewArray); // Output :- Value3 , Value4