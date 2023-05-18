// Author: Uzair Ahmad

// same as function expression just we remove function keyword and use " => " 
const sing = () => {
    console.log("HBD to You!");
}

sing();

const sumOfTwo = (num1,num2) =>{
    return num1+num2;
} 

console.log(sumOfTwo(5,8)); //Output:- 13

const productOfTwo = (num1,num2) => {
    return num1*num2;
}

console.log(productOfTwo(5,8)); //Output:- 40

const firstChar = (myName) => {
    return myName[0];
} 

console.log(firstChar("Uzair")); //Output:- 'U'

const isEven = (num) => {
    return num % 2 === 0;
}

console.log(isEven(8));

const findTarget = (array, target) => {
    for(let i=0; i<array.length; i++){
        if(target === array[i]){
            return i;
        }
    }

    return "Target not Found!";
}

const array = [1,2,3,4,5];

console.log(findTarget(array, 8)); // Output:- Target not found!