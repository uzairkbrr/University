let schedule = {};

alert( isEmpty(schedule) ); // true

schedule["8:30"] = "get up";

alert( isEmpty(schedule) ); // false


// Write the function isEmpty(obj) which returns true if the object has no properties, false otherwise.

function isEmpty(object) {
    for (let key in object) {
        return false;
    }
    
    return true;
}