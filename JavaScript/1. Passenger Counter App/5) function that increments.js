let lapsCompleted = 0

// Create a function that increments the lapsCompleted variable with one
// Run it three times

function increment_laps(laps){
    return laps += 1;
}


lapsCompleted = increment_laps(lapsCompleted);
lapsCompleted = increment_laps(lapsCompleted);
lapsCompleted = increment_laps(lapsCompleted);


console.log(lapsCompleted)