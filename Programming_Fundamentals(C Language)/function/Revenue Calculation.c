//Author: Uzair Ahmad

#include <stdio.h>

int calculate(int x, int y); // Declaration of the calculate function ;

int main() {
    
   int rate, hour;

	// Input hourly rate and hours worked on the project
	printf("How Much You Pay for 1 hour: $");
	scanf("%d", &rate);
	
	printf("How Many Hours You Worked on the Project for Your Client: ");
	scanf("%d", &hour);
	
	// Call calculate function to get revenue
	int revenue = calculate(rate, hour);
	
	// Output total revenue
	printf("\nTotal Revenue: %d$", revenue);
	
	return 0;

}

// Function to calculate revenue based on hourly rate and hours worked
int calculate(int x , int y){
    
    return x * y ;
}