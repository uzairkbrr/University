// Author: Uzair Ahmad

// map method

// const numbers = [3,4,5,6,8];
// const square = function(number){
//     return number * number;
//     // we must return the value from the callback function for map method 
//     // because map method create a new array and return the values in it
// }

// map method will always give us array in return
// const squareNumbers = numbers.map(square);
// console.log(squareNumbers);

const users = [
    {firstName: "Uzair ", age: 19},
    {firstName: "Ahmad", age:20}
]

const usersFirstName = users.map((user)=>{
    return user.firstName;
})

console.log(usersFirstName);