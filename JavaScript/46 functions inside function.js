// Author: Uzair Ahmad

// in javascript, we can create functions inside function 
// no matter what type of function you want to create (function declaration, function expression or arrow function);

function Test(){

    console.log("Inside Test!");

    const myFun = () => {
        console.log("Inside myFun!");
    }

    // arrow function to add 2 numbers
    const addTwo = (num1, num2) => num1+num2;
    // arrow function to multiply 2 numbers
    const mulTwo = (num1, num2) => num1*num2;

    // Now if we want to call these functions which we create inside the Test() function 
    // so we have to call it inside this function
    myFun();
    console.log(addTwo(5,8));
    console.log(mulTwo(5,8));
}

Test();
// when Test() function get called then the functions which we call inside it is automatically called 