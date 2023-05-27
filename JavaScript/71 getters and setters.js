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
}

const person1 = new person("Uzair Ahmad", 19);

// console.log(person1.GetName);

person1.SetName = "Uzair khan";

console.log(person1.GetName);