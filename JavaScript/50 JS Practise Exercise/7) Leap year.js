let year = 2004;

if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
    console.log("Given Year is Leap Year.");
} else {
    console.log("Given Year is not a Leap Year.");
}