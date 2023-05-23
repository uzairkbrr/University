// Author: Uzair Ahmad

// call back function mean that sending function to function as a parameter and call that function inside function;

// sending func2 to func as a parametere and then call it inside the func function
const func = (callback) => {
    callback("Uzair");
}

const func2 = (name) => {
    console.log(`My name is ${name}`); // Ouput:- My name is Uzair
}

func(func2);