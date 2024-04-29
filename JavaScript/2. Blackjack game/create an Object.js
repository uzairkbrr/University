// Create an object that represents an airbnb castle listing.
// It should contain at least one boolean, one string, one number, and one array
// Log out at least two of the keys using the dot notation

let airBnbCastle = {
    title: "Entire rental unit in Islamabad, Pakistan",
    isAvailable: true,
    price: 29,
    reviews: ["Clean Room" , "Most Recommended"]
}


console.log("Title: " + airBnbCastle.title);
console.log("Is Available: " + airBnbCastle["isAvailable"]);
console.log("Price: " + airBnbCastle.price);
console.log("Reviews: " + airBnbCastle["reviews"]);