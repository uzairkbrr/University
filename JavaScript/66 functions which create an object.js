// Author: Uzair Ahmad

// function to create an object
// 1. this function create object
// 2. Add key values pairs
// 3. return that object


const userMethods = {
     // creating an about function which will print name and age of user 
    about : function(){
        return `${this.firstName} is ${this.age} years old.`
    },

    // creating a function which will check if user is 18+ or not
    is18 : function(){
        return this.age >= 18;
    },

    sing: function(){
        return `${this.firstName} is singing`;
    }
}

function createUser(firstName, lastName, email, age, address){

    // create an empty object
    const user = {};
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    user.about = userMethods.about;
    user.is18 = userMethods.is18; 
    user.sing = userMethods.sing; 

    // Here now we are returning the object named user;
    return user;

}

const user1 = createUser("Uzair","Ahmad","uzairdev8@gmail.com", 19, "my Address");

console.log(user1); 

// calling the functions of object  
// console.log(user1.is18());
// console.log(user1.about());
// console.log(user1.sing());