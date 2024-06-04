const calculator = {
    
    sum() {
        return this.a + this.b;
    },
    
    subtract() {
        return this.a - this.b;
    },
    
    multiply() {
        return this.a * this.b;
    },
    
    divide() {
        return this.a / this.b;
    },
    
    read() {
        this.a = +prompt("Enter Number One: ");
        this.b = +prompt("Enter Number Two: ");
    }
}


calculator.read();
console.log("\nBasic Calculation on given numbers are following: \n");
console.log(calculator.a + " / " + calculator.b + " = " + calculator.divide());
console.log(calculator.a + " * " + calculator.b + " = " + calculator.multiply());
console.log(calculator.a + " + " + calculator.b + " = " + calculator.sum());
console.log(calculator.a + " - " + calculator.b + " = " + calculator.subtract());

