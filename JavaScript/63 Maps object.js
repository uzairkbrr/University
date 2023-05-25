// // Author: Uzair Ahmad

// const person = new Map();

// person.set('firstName', 'Uzair');
// person.set('age', 19);

// console.log(person);

// // to access single value from Map use get() method of Map
// console.log(person.get('firstName'));

// assigning new key to objects using Map()
const person1 = {
    id:1,
    Name: "Uzair",
}

const person2 = {
    id:2,
    Name: "Ahmad",
}

// now adding new key to this objects using Map 

const extraInfo = new Map();

extraInfo.set(person1, {age:19 , gender: "Male" });
extraInfo.set(person2, {age:20 , gender: "Male" });

// printing person1 on console.
console.log(person1.id);
console.log(person1.Name);
console.log(extraInfo.get(person1).age);