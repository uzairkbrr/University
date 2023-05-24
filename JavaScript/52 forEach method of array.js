// Author: Uzair Ahmad

// forEach

// Declaring an array
const numbers = [4,2,5,8];

    // const fun = (number, index) => {
    //     console.log(`Index is ${index} and number is ${number}`);
    // }

    // numbers.forEach(fun);

const users = [
    {firstName: "Uzair", age:20},
    {firstName: "Ahmad", age:18}
]

users.forEach(function(user){
    console.log(user.firstName);
})