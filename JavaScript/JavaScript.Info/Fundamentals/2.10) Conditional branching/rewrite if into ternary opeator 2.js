// Rewrite if..else using multiple ternary operators '?'.

// For readability, it’s recommended to split the code into multiple lines.


let message;

let login = prompt("What is your Designation? ");


if (login == 'Employee') {
  message = 'Hello';
} else if (login == 'Director') {
  message = 'Greetings';
} else if (login == '') {
  message = 'No login';
} else {
  message = '';
}

let message2 = (login == "Employee") ? "Hello" : 
              (login == "Director") ? "Greetings" :
              (login == "") ? "No Login" : "" 


console.log(message)
console.log(message2)



