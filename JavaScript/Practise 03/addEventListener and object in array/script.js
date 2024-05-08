let data = [
    {
        player: "Jane",
        score: 52
    }, 
    {
        player: "Mark",
        score: 41
    }
]

// Fetch the button from the DOM, store it in a variable
// Use addEventListener() to listen for button clicks
// Log Jane's score when the button is clicked (via data)

const btn = document.getElementById("btn")
const clearBtn = document.getElementById("clear-btn")

btn.addEventListener("click", function() {
    let p = document.createElement("p")
    let text = document.createTextNode(`Player: ${data[0].player}, Score: ${data[0].score} `)

    p.appendChild(text)
    document.body.appendChild(p)

} )


clearBtn.addEventListener("click", function() {
    let logParagraphs = document.querySelectorAll("p");
    logParagraphs.forEach(paragraph => {
        paragraph.remove();
    });
})