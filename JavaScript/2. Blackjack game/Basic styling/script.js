let firstCard = 10;
let secondCard = 4;
let sum = firstCard + secondCard;
let hasBlackJack = false;
let isAlive = true;
let message = "";
let cards = "";

let messageEl = document.getElementById('message-el');
let sumEl = document.getElementById('sum');
let cardsEl = document.getElementById('cards-el');

// 3. Render the cars on the page using this format -> "Cards: 10 4"

function renderGame() {
    if (sum <= 20) {
        message = "Do you want to draw a new card? ";
    } else if (sum === 21) {
        message = "Wohoo! You've got Blackjack! 🥳";
        hasBlackJack = true
    } else {
        message = "You're out of the game! 😭";
        isAlive = false;
    }
    
    
    cards = "Cards: " + firstCard + " " + secondCard
    messageEl.textContent = message;
    sumEl.textContent += " " + sum;
    cardsEl.textContent = cards;
}


function newCard() {
    console.log("Drawing a new card from the deck!")

    let newVar = 5;
    sum += newVar;
    renderGame();
}