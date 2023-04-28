// Author: Uzair Ahmad 

// break keyword :

// example on break keyword; 

for(let i=0; i<=10; i++){
    // whenever i equal to 4 then if statement will be executed and we wrote break keyword inside if its mean go outside from this part of code, so compiler will go outside from for loop;
    if(i===4){
        break;
    }

    console.log(i);
}
// Output : 0 1 2 3 


// continue keyword :

// example on continue keyword;

for(let i=0; i<=10; i++){
    // whenever i equal to 4 then if statement will be executed and we wrote continue keyword inside if its mean that if i==4 then skip that specific iteration ;
    if(i===4){
        continue;
    }

    console.log(i);
}
// Output : 0 1 2 3 5 6 7 8 9 10