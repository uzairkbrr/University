// Author: Uzair Ahmad


// function about(hobby, study){
//     console.log(`My Name is ${this.Name} and my age is ${this.age}. I am studing ${study} and my Hobby is ${hobby}`);
// }

// const user1 = {
//     Name: "Uzair",
//     age: 19,
// }

// const user2 = {
//     Name: "Ahmad",
//     age: 20,
// }
 
// about.call(user1, "Gaming", "Computer Science");
// about.call(user2, "Programming", "Software Engg");

// apply method:-
// same as call method, in apply method we need to pass the arguments to the function through array

// about.apply(user1, ["Gaming", "Computer Science"]);
// about.apply(user2, ["Cricket", "Arts"]);


// bind method:-
// behave same like the apply and call, difference is that it will return the values of object in function

// const answer = about.bind(user1, "gaming", "Computer Science"); 

// // now to call the above "answer" function which is returned by bind 
// answer();