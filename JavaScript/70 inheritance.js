// Author: Uzair Ahmad

// create a class of animal.
class Animal{
    constructor(name, age){
        this.name = name; 
        this.age = age; 
    }

    // define a method named "eat" for the animal object
    eat(){ 
        return `${this.name} is eating`; // return a string that says what the animal is doing
    }

    // define a method named "isCute" for the animal object
    isCute(){ 
        return true; // return a boolean value indicating whether the animal is cute or not
    }
}


class Dog extends Animal{ // define a subclass of Animal named "Dog"
    constructor(name, age, speed){
        // this super() will send the name and age to the constructor of animal class
        super(name,age); 
        // and the remaining argument will be assigned to the speed variale, which is the speed of our tommy (dog);
        this.speed = speed;
    }

    run(){
        return `${this.name} is running at ${this.speed}kmph`;
    }
}


const tommy = new Dog("Tommy", 1,58); // create a new Dog object named "tommy"

console.log(tommy);
// the below two methods is not of Dog class, but our dog class is inherited by animal clas
// so if any method is not available in dog class, then our compiler will check that methods in our base class (animal class);
console.log(tommy.eat()); 
console.log(tommy.isCute()); 
console.log(tommy.run());