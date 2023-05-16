// Author: Uzair Ahmad

const person = {
    name:"Uzair",
    age:19,
    "person hobbies": ["Playing video games", "sports", "coding"],
}

// for in loop

// by this we can get values of our keys;
// for(let key in person){
//     console.log(person[key]);
// }

// we can also get value with the use of Object.keys() method;
console.log(Object.keys(person));