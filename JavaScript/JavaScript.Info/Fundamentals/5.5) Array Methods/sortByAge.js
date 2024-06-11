// Write the function sortByAge(users) that gets an array of objects with the age property and sorts them by age.

let john = { name: "John", age: 25 };
let pete = { name: "Pete", age: 30 };
let mary = { name: "Mary", age: 28 };

let arrayOfObject = [ pete, john, mary ];

function sortByAge(arr){
    arr.sort((a,b) => a.age - b.age);
}

sortByAge(arrayOfObject)

console.log(arrayOfObject)

