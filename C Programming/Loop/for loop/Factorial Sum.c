//Author: Uzair Ahmad

#include <stdio.h>

int main() {

	int num ,sum1=0, sum=1;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		sum = 1 ; // Initialize sum to 1 for each iteration
	    
		for(int j=1;j<=i;j++)
		{
	    	sum = sum * j ; // Calculate factorial of i
		}
	
	sum1 = sum1 + sum ; // Add factorial of i to the sum
	}
	  
	printf("Sum : %d",sum1); // Print the final sum
	  
	return 0;
}