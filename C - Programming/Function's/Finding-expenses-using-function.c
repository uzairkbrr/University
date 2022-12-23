#include<stdio.h>

int monthlyexp(); // Declaration of Function;
int annualexp(); // Declaration of Function;

int main(){
    
    annualexp(); // Calling Function ;

    return 0;
}

int monthlyexp( ){
	
    int loan = 230 , insurance = 300 , gas = 430 , oil = 180 , tires = 280 , maintaince = 530 ;
    int sum = loan + insurance + gas + oil + tires + maintaince  ; // Sum of Expenses ;
    
    return sum ;
}

int annualexp(){
   
  int Sum = monthlyexp(); // Calling Function ;
  
  printf("Montly Expenses : %d \n", Sum); // Monthly Expenses ;
  
  int annualsum = Sum * 12 ; // This is for Annual Expenses ;
  
  printf("Annual Expenses : %d \n", annualsum); 
  return annualsum ;
}
