// Write a function filterRange(arr, a, b) that gets an array arr, looks for elements with values higher or equal to a and lower or equal to b and return a result as an array.

function filterRange(arr, a, b) {
    return arr.filter(index => index >= a && index <= b);
}

console.log(filterRange([1,2,3,4,5,6,7,8,9,10], 5,9));