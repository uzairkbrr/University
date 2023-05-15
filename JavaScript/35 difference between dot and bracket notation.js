// Author: Uzair Ahmad 


const person = {
    name:"Uzair",
    age:19,
    "person hobbies": ["Playing video games", "sports", "coding"],
}

// if we want to give name to our property of two words like (person hobbies) then we have to use brackets notation because javascript didn't allow us to use spaces while naming a variable

console.log(person["person hobbies"]); // Output:- Playing video games, sports, coding 

const key = "email";
// now we want to add the value of key in person object and assign it a value;

person[key] = "uzairdev8@gmail.com";
// by doing this we can now easily add new property to person of email and assigned it our value
console.log(person);