// Author: Uzair Ahmad

// for loop :

// this for loop will print numbers from 1 - 10 ;
// for(let i=1 ; i<=10 ;i++){
//     console.log(i);
// }

// for loop example ;
// find sum of first nth natural number using for loop ;

let num = 10;
let sum = 0 ;

for(let i = 0; i <= num ; i++){
    sum += i ;
}

console.log(`sum of first ${num} natural number is ${sum}`);

// OutPut : sum of first 10 natural number is 55;