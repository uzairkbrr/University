// Write the function getAverageAge(users) that gets an array of objects with property age and returns the average age.

let john = { name: "John", age: 25 };
let pete = { name: "Pete", age: 30 };
let mary = { name: "Mary", age: 29 };

let arr = [ john, pete, mary ];

console.log(arr)

function getAverageAge(users){
    return users.reduce((prev, user) => prev + user.age, 0) / users.length;
}

console.log("\n\nAverage Age of Users is: ", getAverageAge(arr));