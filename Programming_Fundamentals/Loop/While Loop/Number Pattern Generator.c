//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	// Declare the variable to store the number of rows and initialize variable x.
	int n ;
	int x = 1;
	
	// Prompt user to input the number of rows
	printf("Enter Number of Row's : ");
	scanf("%d", &n);
	
	// Use a while loop to iterate through each row
	int i = 1 ;
	while( i <= n )
	{
		// Use a nested while loop to iterate through the elements of each row
		int j = 1;
		while(j <= i)
		{
			// Print the value of x for each element
			printf("%d", x);	
			j++;
		}
		
		// Increment x and i for the next row and print a newline character to move to the next line
		x++;
		i++ ;
		printf("\n");
	}
	
	return 0;

}