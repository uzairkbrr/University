// Author: Uzair Ahmad

class person{
    constructor(firstName, lastName, age){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    // getter
    get GetName(){
        return `${this.firstName} ${this.lastName}`;
    }

    // setter
    set SetName(fullName){
        const [firstName , lastName] = fullName.split(" ");
        this.firstName = firstName;
        this.lastName = lastName;
    }

     eat(){ 
        return `${this.name} is eating`; 
    }

    isCute(){ 
        return true;
    }

    // this static methods and properties is directly accessable by class itself.
    // there is no need to create an object of the class and then call it.
    static classInfo(){
        console.log("This is classInfo");
        console.log("Using static Keyword");
    }

    static testing = "static property";
}

person.classInfo();
// Output:-
// This is classInfo
// Using static Keyword

console.log(person.testing); // Output:- static property