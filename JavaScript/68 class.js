// Author: Uzair Ahmad

class CreateUser{
    constructor(firstName, lastName, email, age, address){
        this.firstName = firstName;
        this.lastName = lastName;
        this.email = email;
        this.age = age;
        this.address = address;
    }

    // methods of this class 
    about(){
        return (`${this.firstName} is ${this.age} years old`);
    }

    is18(){
        return this.age > 18;
    }

    sing(){
        return "i am singing !";
    }
}

// we cannot create of an object wihtout using "new" keyword;

const User1 = new CreateUser("Uzair","Ahmad","uzairdev8@gmail.com", 19, "my Address");

console.log(User1.firstName);