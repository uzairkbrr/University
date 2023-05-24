// Author: Uzair Ahmad

function myFunction(){
    // the testing function will return the following string 
    // and myFunction function will return testing function so its mean that indirectly myFunction function will return the string which is returned by testing function
    function testing(){
        return "Testing of Function returning function";
    }

    // now returning the above function which we create in myFunction
    return testing;
}

// now create a variable of ans name and store that returned function from myFunction()
// ans is not a variable now it is function because we store returned function in it.
const ans = myFunction();
console.log(ans()); // Output:- Testing on Function returning function