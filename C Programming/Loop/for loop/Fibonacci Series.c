// Author: Uzair Ahmad

#include <stdio.h>


int main (){
	
	int number, Third_No; // Initialize the variables to store the input number and the third number in the series
	int a = 0, b = 1; // Initialize the first two numbers of the series to 0 and 1
	
	// Prompt the user to enter the number
	printf("Enter No : ");
	scanf("%d", &number);
	
	// Generate the Fibonacci Series up to the entered number
	printf("%d Term of Fibonachi Series is : ", number);
	for ( int i = 1 ; i <= number ; i++)
	{
		printf(" %d ", a); // Print the current number in the series
		
		Third_No = a + b; // Calculate the next number in the series by adding the previous two numbers
		a = b; // Update the value of the first previous number with the value of the second previous number
		b = Third_No; // Update the value of the second previous number with the value of the current number
	}
	
	return 0 ;
}
