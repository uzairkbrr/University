// Author: Uzair Ahmad


// function inside object is called method

function personInfo(){
    console.log(`My Name is ${this.Name} and My age is ${this.age}`);
}

const person1 = {
    Name: "Uzair",
    age: 19,
    about: personInfo,
}

const person2 = {
    Name: "Ahmad",
    age: 20,
    about: personInfo,
}

const person3 = {
    Name: "Uzm",
    age: 21,
    about: personInfo,
}
person1.about();
person2.about();
person3.about();
