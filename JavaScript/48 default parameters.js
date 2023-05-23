// Author: Uzair Ahmad


// this function accept 2 parameters and 1 of them is default parameter 
// its mean that if we just pass 1 argument on time of calling this function then it will simply set the second value to 0
// and if we pass both values on time of calling this function then both values will be set accordingly
function addTwo(a,b=0){
    return a+b;
}

console.log(addTwo(5)); //Output:- 5