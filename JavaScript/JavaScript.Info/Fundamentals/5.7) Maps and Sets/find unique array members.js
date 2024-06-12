// Let arr be an array.

// Create a function unique(arr) that should return an array with unique items of arr.


function unique(arr) {
    return Array.from(new Set(arr));
  }
  
let values = ["Hare", "Krishna", "Hare", "Krishna", "Krishna", "Krishna", "Hare", "Hare", ":-O"
];
  
console.log( unique(values) ); // Hare, Krishna, :-O