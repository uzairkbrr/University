// Author: Uzair Ahmad

const users = [
    {userId:1, firstName: "uzair", gender: "male"},
    {userId:2, firstName: "Saud", gender:"male"},
    {userId:3, firstName: "muhammad", gender: "male",},
]

// it will destruct the total object of array to user1 user2 and user3
const [user1, user2, user3] = users;

// now if we want to just destruct a single key from the object so
// i want to destruct the name of 1st object and gender of last object 
const [{firstName:userName}, , {gender:userGender}] = users;
console.log(userName);
console.log(userGender);
