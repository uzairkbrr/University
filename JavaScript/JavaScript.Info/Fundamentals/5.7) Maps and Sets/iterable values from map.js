// We’d like to get an array of map.valuse() in a variable and then apply array-specific methods to it, e.g. .push.


let map = new Map();

map.set("name", "John");

let keys = Array.from(map.values());

keys.push("Uzair");
console.log(keys);