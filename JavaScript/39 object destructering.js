// Author: Uzair Ahmad

const person = {
    personName: "Uzair Ahmad",
    age : 19,
    email: "uzairdev8@gmail.com",
    gender: "male",
}

// destruct variables from object person
// the below code will first create two variable " const personName , const age" then it will assgin the values of personName and age from person object 
// by default name is the key name of our object
// if we want to give some others names to our variables then we wrote keyName of Object + " : " and newVariable name
// for example:-  personName:myName
// so by doing this we will destructering personName key of object in myName variable 
const {personName:myName, age:myAge, ...restProperties} = person;

console.log(myName); // Output:- Uzair Ahamd
console.log(myAge); // Output:- 19
console.log(restProperties); // Output:- email: 'uzairdev8@gmail.com , gender: 'male'