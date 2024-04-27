// 1. Create two variables, firstCard and secondCard. 
// Set their values to a random number between 2-11

let firstCard = 10;
let secondCard = 11;
// 2. Create a variable, sum, and set it to the sum of the two cards

let sum = firstCard + secondCard;

if (sum < 21) {
    console.log("Do You want to draw another card ?  🙂");
    
} else if (sum === 21) {
    console.log("Wohoo ! You've Got BlackJack! 🥳");
} else {
    console.log("You're out of the game! 😭");
}
