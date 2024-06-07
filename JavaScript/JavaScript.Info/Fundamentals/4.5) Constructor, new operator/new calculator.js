const Calculator = function() {
    
    this.read = function() {
        this.a = +prompt("Enter a: ");
        this.b = +prompt("Enter b: ");
    }
    
    this.sum = function() {
        return this.a + this.b;
    }
    
    this.multiple = function() {
        return this.a * this.b;
    }
    
}


const calculator = new Calculator();

calculator.read();
console.log("Sum: " + calculator.sum());
console.log("Multiple: " + calculator.multiple());