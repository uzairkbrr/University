let firstCard = 10;
let secondCard = 4;
let cards = [firstCard, secondCard];
let sum = cards[0] + cards[1];
let hasBlackJack = false;
let isAlive = true;
let message = "";

let messageEl = document.getElementById('message-el');
let sumEl = document.getElementById('sum');
let cardsEl = document.getElementById('cards-el');

function startGame() {
    renderGame();
}


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
    
    
    
    messageEl.textContent = message;
    sumEl.textContent = "Sum: " + sum;
    cardsEl.textContent = "Cards: " + cards[0] + " " + cards[1];
}


function newCard() {
    console.log("Drawing a new card from the deck!")

    let newVar = 5;
    sum += newVar;
    renderGame();
}