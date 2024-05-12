function pow(x, n) {
    let result = x;
  
    for (let i = 1; i < n; i++) {
      result *= x;
    }
  
    return result;
  }
  
  console.log("You will get x^n ( pow(x,n) ): ");
  let x = prompt("Enter X: ", '');
  let n = prompt("Enter N: ", '');
  
  if (n < 1) {
    alert(`Power ${n} is not supported, use a positive integer`);
  } else {
    console.log( pow(x, n) );
  }