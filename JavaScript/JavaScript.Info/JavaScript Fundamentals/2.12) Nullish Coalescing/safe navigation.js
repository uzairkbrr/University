// Write a function getUserAddress(user) that takes a user object as input
// and returns the user's address if it exists, or "Unknown" if the address is not provided.

const user = {
    name: "Uzair",
    age: 19
}


function getUserAddress(user) {
    console.log(user.address ?? "Unknown");
}


getUserAddress(user);