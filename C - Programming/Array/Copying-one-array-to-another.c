#include <stdio.h>

int main(){
	
	int n ; 
	int x[n] , y[n] ;
	
	printf("Enter Nth Number : ");
	scanf(" %d", &n);
	
	// assigning values to 1st Array ;
	
	for(int i = 0 ; i < n ; i++) 
	{
		scanf(" %d", &x[i]);
	}
	
	// Coping Value of 1st Array ;
	
	for(int j = 0 ; j < n ; j++)
	{
		y[j] = x[j] ;
	}
	
	printf("Value of 2nd Array : ");
	
	// Now printing Values of 2nd Array to Check Weather our program run correctly or not ;
	for(int j = 0 ; j < n ; j++)
	{
		printf(" %d", y[j]);
	}
	
	printf("\nValue of 2nd Array in Reverse Form : ");
	
	// Printing Values of 2nd Array in Reverse Form ;
	
	for( int j = n-1 ; j >= 0 ; j--)
	{
		printf(" %d" , y[j]);
	}


	return 0 ;
}