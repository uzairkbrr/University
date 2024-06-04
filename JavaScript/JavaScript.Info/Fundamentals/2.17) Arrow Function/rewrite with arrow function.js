// function ask(question, yes, no) {
//     if (confirm(question)) yes();
//     else no();
// }

const ask = (question, yes, no) => {
    confirm(question) ? yes() : no()
}

  
ask(
    "Do you agree?",
    () => alert("You agreed.") ,
    () => alert("You canceled the execution.")
);


