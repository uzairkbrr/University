// Author: Uzair Ahmad

#include<stdio.h>
int main (){
    
    int id;
	int hours;
	int salary;
	
	printf("Enter Employ id : " );
	scanf("%d", &id );
	
	// Checking if the entered employee id is valid or not.
	if (id <= 0){
		
	    printf("InValid id \n!");
	    
	}
	
	else {
		
	    printf("Enter Worked Hour's : ");
	    scanf("%d", &hours);
	    
	    printf("Enter Salary Rate : ");
	    scanf("\n %d", &salary);
	    
	    // Calculating the salary by multiplying hours worked and salary rate.
	    int Money = hours * salary ;
	     
	    printf("Your Salary is : %d \n", Money);
	
	    printf("Thanks For Visiting.");
	}
	
	
	return 0;
}

