function Accumulator(initalValue) {
    this.value = initalValue;
    
    this.read = function() {
        let number = +prompt("How much to Add: ");
        this.value += number;
    }
}

const accumulator = new Accumulator(1);
accumulator.read();

console.log(accumulator.value);