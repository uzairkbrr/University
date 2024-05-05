// Use .innerHTML to render a Buy! button inside the div container

let container = document.getElementById("container");

container.innerHTML = "<button id='containerBtn'> Buy! </button>";

const button = document.getElementById("containerBtn");

button.addEventListener("click", function() {
    container.innerHTML += "<p>Thanks you for Buying!</p>";
})