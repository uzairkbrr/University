// Author: Uzair Ahmad

// Sets (it is iterable)
// store data
// sets also have its own methods
// No-index base accessing
// order is not guranteed
// we can store unique items only (no duplicate allowed)(duplicate items will be ignored)

// const numbers = new Set([1,2,3]);
const numbers = new Set();

const array = ["item1", "item2"];

numbers.add(1);
numbers.add(2);
numbers.add(array);

if(numbers.has(1)){
    console.log("Set has 1");
}else{
    console.log("Set doesn't have 1");
}



// console.log(numbers);

for(let number of numbers){
    console.log(number);
}

// This is how we can find length of Set

// 1st method of finding length:-
// console.log(numbers.size);

// 2nd method of finding length:-
// let length=0;

// for(let num of numbers){
//     length++;
// }
// console.log(length);