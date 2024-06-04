// Write the code which asks for a login with prompt.

// If the visitor enters "Admin", then prompt for a password, if the input is an empty line or Esc – show “Canceled”, if it’s another string – then show “I don’t know you”.

// The password is checked as follows:

// If it equals “TheMaster”, then show “Welcome!”,
// Another string – show “Wrong password”,
// For an empty string or cancelled input, show “Canceled”


let userName = prompt("Enter Your Code: ");
let userPassword;

if ( userName === "Admin" ) {
    userPassword = prompt("Enter Your Password: ");

    if ( userPassword === "TheMaster") {
        console.log("Welcome");
    } else if ( userPassword !== "TheMaster") {
        console.log("Wrong Password ");
    } else {
        console.log("Canceled");
    }

} else if ( userName !== "Admin" ) {
    console.log("I don't know you");
} else {
    console.log("Canceled")
}