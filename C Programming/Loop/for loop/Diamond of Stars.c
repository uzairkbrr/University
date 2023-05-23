// Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
   int rows ;

	printf("Enter Row's : "); // Prompt the user to enter the number of rows
	scanf("%d", &rows); // Take input from the user and store it in the rows variable
	
	// Loop to print the top half of the diamond
	for(int i = 1 ; i <= rows ; i++)
	{
	    // Loop to print the spaces before the stars in each row
	    for(int space = rows ; space >= i ; space--)
	    {
	        printf(" ");
	    }
	    
	    // Loop to print the stars in each row
	    for(int k = 1 ; k <= i ; k++)
	    {
	        printf("* ");
	    }
	    printf("\n"); // Move to the next line to print the stars for the next row
	}
	
	// Loop to print the bottom half of the diamond
	for(int i = 1 ; i <= rows ; i++)
	{
	    // Loop to print the spaces before the stars in each row
	    for(int space = 0 ; space <= i  ; space++)
	    {
	        printf(" ");
	    }
	    
	    // Loop to print the stars in each row
	    for(int k = rows ; k > i; k--)
	    {
	        printf("* ");
	    }
	    printf("\n"); // Move to the next line to print the stars for the next row
	}
	
	return 0;
}