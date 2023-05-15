// Author: Uzair Ahmad 

//  array are good but not sufficient for real world data


// How to create object:-

// object is reference type
// for creating object we use "{}" and for array we use "[]"

// the properties of object is also called key 
// key of the object is by default string
const person = {
    name: "Uzair",
    age: 19,
    hobbies: ["Playing video games", "sports", "coding"]
}
// we also called it object litteral
// console.log(person);

// how to access data of object 
// we can access the properties of object using dot ( . ) operator
console.log(person.name); // Ouput:- Uzair
console.log(person.age); // Output:- 19
console.log(person.hobbies); // Ouptut:- Playing video games, sports, coding
// we also access specifec index of array using the concepts of array;

// How to add key value pair to object :-
// adding by dot notation
// person.gender = "Male";

// adding by bracket "[]" notation
person["gender"] = "Male";
// by doing this we can add a new property to person and also assign value to it 

console.log(person.gender); // Output:- Male


