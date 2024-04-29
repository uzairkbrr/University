// Create a person object that contains three keys: name, age, and county.
// Use yourself as an example to set the values for name, age, and country

// Create a function, logData(), that uses the person object to create a
// string in the following format: 
// "Per is 35 years old and lives in Norway"

// Call the logData() function to verify that it works

let person = {
    name: "Uzair",
    age: 19,
    country: "Pakistan",

    logData: function() {
            console.log(`${this.name} is ${this.age} years old and lives in ${this.country}`);
    }
}

person.logData();