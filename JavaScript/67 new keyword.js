// Author: Uzair Ahmad

// The "new" keyword in JavaScript is used to create an instance of an object constructor function.
// In JavaScript, object constructor functions are used to define blueprints for creating objects. 
// When the "new" keyword is used with a constructor function,
// it creates a new instance of the object defined by the constructor function.

// Note that when a constructor function is invoked with the "new" keyword, 
// it automatically creates a new object, sets the "this" keyword to point to that object, and returns the object

function CreateUser(name, age){
    this.name = name;
    this.age = age;
};

const User1 = new CreateUser("Uzair", 19);

console.log(User1); 