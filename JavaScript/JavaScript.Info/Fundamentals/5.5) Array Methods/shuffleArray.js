// Write the function shuffle(array) that shuffles (randomly reorders) elements of the array.

// Multiple runs of shuffle may lead to different orders of elements. For instance:

let array = [1,2,3,4,5]
console.log("Original Array: ", array);



function shuffle(arr) {
    arr.sort(() => Math.random() - 0.5);
}

shuffle(array);
console.log("Shuffle Array: ", array);
