// Author: Uzair Ahmad

// create a class of animal.
class Animal{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }

    eat(){
        return `${this.name} is eating`;
    }

    isCute(){
        return true;
    }
}

const animal1 = new Animal("Tom", 2);

console.log(animal1);
console.log(animal1.eat());
console.log(animal1.isCute());