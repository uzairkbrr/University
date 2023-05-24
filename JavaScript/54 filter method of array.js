// Author: Uzair Ahmad

 const numbers = [1,2,3,4,5,6,7,8,9,10];

 // this function will return true if the number is even
 const isEven = function(number){
    return number%2===0;
 }

 // create a new array for storing the even numbers which will be filtered from numbers array using filter method
 const evenNumbers = numbers.filter(isEven);
// now displaying evenNumbers on console
 console.log(evenNumbers);