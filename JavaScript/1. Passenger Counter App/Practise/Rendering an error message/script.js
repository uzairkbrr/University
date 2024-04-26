// When the user clicks the purchase button, render out
// "Something went wrong, please try again" in the paragraph
// that has the id="error".

let errorParagraph = document.getElementById("error");
let closeBtn = document.getElementById("close");

function purchase(){
    errorParagraph.innerText = "Something went wrong, please try again";
    closeBtn.classList.remove("hide");
}

function hide() {
    errorParagraph.innerText = "";
    closeBtn.classList.add("hide");
}