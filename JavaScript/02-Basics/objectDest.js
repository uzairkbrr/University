"use strict";

const course = {
  courseName: "Programming",
  coursePrice: "999",
  courseTeacher: "Uzair Ahmad",
};

const { courseName } = course;
// const { courseTeacher } = course;
const { courseTeacher: Teacher } = course;

console.log(courseName);
console.log(Teacher);

// Study about Json & API
