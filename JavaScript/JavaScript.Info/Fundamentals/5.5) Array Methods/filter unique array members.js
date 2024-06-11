// Create a function unique(arr) that should return an array with unique items of arr.

function unique(arrayOfUsers) {
    // create empty array
  const result = []
  
  for(const user of arrayOfUsers) {
      // if result ( the empty array) doesn't have the current user / value then add it into result array else skip
      if (!result.includes(user)) {
          result.push(user);
      }
  }
  
  return result;
}

let strings = ["Hare", "Krishna", "Hare", "Krishna",
  "Krishna", "Krishna", "Hare", "Hare", ":-O"
];


const updatedStrings = unique(strings);
console.log(updatedStrings);

