// Author: Uzair Ahmad

// spread operator:-

// const array = [1,2,3];
// const array1 = [4,5,6];

// const array2 = [...array, ...array1];

// console.log(array2);

// spread operator in objects
const obj1 = {
    key1: "value1",
    key2: "value2"
}
const obj2 = {
    // key1 is also in obj1 so if we clone these 2 objects in another in object so key1 value of obj1 will be overwritted by key1 of obj2;
    key1: "newValue",
    key3: "value3",
    key4: "value4"
}

const newObj = {...obj1, ...obj2};

console.log(newObj);

const newobject = {..."abcde"};
// it will now spread inside the the object 
// and keys will be according to its index no;
// for example:-
// 0:a
// 1:b
// 2:c
// 3:d
// 4:e

console.log(newobject); // Output:- {0: 'a', 1: 'b', 2: 'c', 3: 'd', 4: 'e'};


// cloning array into object 
const newNewObject = {...["item1", "item2"]};

console.log(newNewObject); //Output :- {0: 'item1', 1: 'item2'};
// it will assign key0 to item 1 and key1 to item2
// 0: "item1",
// 1: "item2"