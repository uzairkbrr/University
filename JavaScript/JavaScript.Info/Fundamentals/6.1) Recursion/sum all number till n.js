// sumTo(1) = 1
// sumTo(2) = 2 + 1 = 3
// sumTo(3) = 3 + 2 + 1 = 6
// sumTo(4) = 4 + 3 + 2 + 1 = 10
// ...
// sumTo(100) = 100 + 99 + ... + 2 + 1 = 5050

sumTo = () => {
    if (x===1) {
        return x;
    }

    return x + sumTo(x-1);
}


console.log(sumTo(2)); // 3
console.log(sumTo(3)); // 6
console.log(sumTo(4)); // 10