//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	
	int row ;
	int number = 1 ; 
	
	printf("Enter Row's : ");
	scanf("%d", &row);
	
	
	// for 1st pattern ;
	
	printf("\nPattern 1 : \n");
	
	for (int i = 1 ; i<= row ; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			printf("%d ", number); // print the number
			number++ ; // increment the number
		}
		printf("\n"); // after a row is completed, move to next row
	}
	
	// for 2nd Pattern ;
	
	printf("\nPattern 2 : \n");
	
	for (int i = 1 ; i<= row ; i++)
	{
		 int x = 0 , y = 1 ; // initialize variables
		 
		for (int j = 1 ; j <= i ; j++)
		{
			printf("%d ", x); // print the fibonacci number
			
			// calculate next fibonacci number
			int z = x + y ; 
			x = y ;
			y = z ;
		}
	
		printf("\n"); // after a row is completed, move to next row
	}
	
	
	// for 3rd Pattern ;
	
	printf("\nPattern 3 : \n");
	
	char alphabet = 'A' ; // initialize variable with 'A'
	
	for (int i = 1 ; i<= row ; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			printf("%c ", alphabet); // print the alphabet
		}
		
		alphabet++ ; // move to the next alphabet
		printf("\n"); // after a row is completed, move to next row
	}
	
	return 0 ;

}