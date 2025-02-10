//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int n ; 
	
	// Asks the user to enter the value of n
	printf("Enter Size for Array : ");
	scanf(" %d", &n);
	
	// Declares two arrays of size n
	int x[n] , y[n] ;
	
	// Asks the user to input values for the first array
	printf("Enter values for the 1st array: ");
	
	// For loop to assign values to the first array
	for(int i = 0 ; i < n ; i++) 
	{
		scanf(" %d", &x[i]);
	}
	
	// For loop to copy the values of the first array into the second array
	for(int j = 0 ; j < n ; j++)
	{
		y[j] = x[j] ;
	}
	
	// Prints the values of the second array
	printf("Value of 2nd Array : ");
	
	for(int j = 0 ; j < n ; j++)
	{
		printf(" %d", y[j]);
	}
	
	// Prints the values of the second array in reverse order
	printf("\nValue of 2nd Array in Reverse Form : ");
	
	for(int j = n-1 ; j >= 0 ; j--)
	{
		printf(" %d" , y[j]);
	}
	
	
	return 0 ;

}