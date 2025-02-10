// Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int rows ; // Variable to store the number of rows in the pyramid

	printf("Enter Number of Row's => "); // Prompt the user to enter the number of rows
	scanf("%d", &rows); // Take input from the user and store it in the rows variable
	
	// Loop through each row, starting from the first row and ending at the specified number of rows
	for (int i = 1 ; i <= rows ; i++ )
	{		
		// Loop through each column in the current row and print stars
		for(int j = 1 ; j <= i ; j++)
		{ 
			printf("*");
		}
		
		printf("\n"); // Move to the next line to print the stars for the next row
	}

return 0;
}