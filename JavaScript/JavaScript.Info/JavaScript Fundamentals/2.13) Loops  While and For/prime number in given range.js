

let start = +prompt("Enter Starting Number: ");
let end = +prompt("Enter Ending Number: ");

for ( let i = start; i <= end; i++) {
    
    let dividends = 0;
    
    for ( let j = 1; j <= i; j++ ){
        
        if ( i % j == 0) {
            dividends++;
        }
    }
    
    if ( dividends == 2 ) {
        console.log(`${i} is a Prime Number.`);
    }
}