// Object - store data in-depth - composite / complex data type
//  key value pair

let course = {
    title: "Learn CSS Grid for free",
    lesson: 16,
    creator: "Per Harald Borgen",
    length: 63,
    level: 2, // intermediate
    isFree: true,
    tags: ["html", "css"]
}

// We can get the data from object through dot notation and Bracket notation as well.

console.log(course.title);
console.log(course["tags"]);

// NOTE: The dot notation is more prefer to use.