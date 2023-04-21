// Author: Uzair Ahmad

// In JavaScript, the nested if-else statement is a way to create multiple conditional statements inside each other. This allows for more complex logic to be implemented


// Guessing Game with Nested if-else Statements in JavaScript :-

let winningNumber = 85;
// prompt take input in string so to convert it to number we wrote + before it;
let userGuess = +prompt("Guess a Number");

// if userGuess is equal to winningNumber then go inside if
if(winningNumber === userGuess){
    console.log("You win");
} // if userGuess is not equal to winningGuess then go inside else 
else{
    // now if the userGuess is greater then winningNumber then go inside if 
    if(winningNumber > userGuess){
        console.log("Too Low");
    } // userGuess is lesser then winningNumber then execute else;
    else{
        console.log("Too High");    
    }
}
