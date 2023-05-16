// Author: Uzair Ahmad

// very useful in real world applications

// creating an array:

const users = [
    {userId:1, firstName: "uzair", gender: "male"},
    {userId:2, firstName: "Saud", gender:"male"},
    {userId:3, firstName: "muhammad", gender: "male",},
]

console.log(users);

// how to iterate objects in array ?
// for this we use for of loop

// it will print all the information of every single user: 
for(let user of users){
    console.log(user);
}

// if we want to print any key of user 
// so we have to write "user.userId"
// object name with dot opertaor and after dot operator we need to write key name which we need