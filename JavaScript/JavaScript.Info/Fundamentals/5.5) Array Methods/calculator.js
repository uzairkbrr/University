
function calculator(str) { 
    str = str.split(" ");
    let a = +str[0];
    let operator = str[1];
    let b = +str[2];
    
    if (operator == "/") {
        return a / b;
    } else if (str[1] == "*") {
        return a * b;
    } else if (str[1] == "+") {
        return a + b; 
    } else if (str[1] == "-"){
        return a - b; 
    } else if (str[1] == "**") {
        return a ** b; 
    }
    
} 


console.log("8 / 5: ",calculator("8 / 5"))
console.log("8 * 5: ",calculator("8 * 5"))
console.log("8 + 5: ",calculator("8 + 5"))
console.log("8 - 5: ",calculator("8 - 5"))
console.log("8 ** 5: ",calculator("8 ** 5"))