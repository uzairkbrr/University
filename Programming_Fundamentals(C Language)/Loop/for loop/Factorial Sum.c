//Author: Uzair Ahmad

#include <stdio.h>

int main() {

	int num , sum=0, factorial=1;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		factorial = 1 ; // Initialize sum to 1 for each iteration
	    
		for(int j=1;j<=i;j++)
		{
	    	factorial = factorial * j ; // Calculate factorial of i
		}
	
	printf("Factorial of %d = %d\n",i+1,factorial);
	sum = sum + factorial ; // Add factorial of i to the sum
	}
	  
	printf("Sum of all the factorial from %d to %d is %d",1 , num, sum); // Print the final sum
	
	  
	return 0;
}
