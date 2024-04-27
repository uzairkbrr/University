let sentence = ["Hello ", "my ", "name ", "is ", "Uzair"] 
let greetingEl = document.getElementById("greeting-el")

let resetBtn = document.getElementById("resetBtn");
// Render the sentence in the greetingEl paragraph using a for loop and .textContent


function greeting() {
    for (let i=0; i < sentence.length; i++) {
        greetingEl.textContent += sentence[i];
    }

    resetBtn.style.display = "inline-block";
}

function reset() {
    greetingEl.textContent = ""
    resetBtn.style.display = "none";
}