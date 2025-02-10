// Author: Uzair Ahmad

#include <stdio.h>

int main() {
	
	int row, col;
	
	printf("Enter Rows => ");
	scanf("%d", &row);
	printf("Enter Columns => ");
	scanf("%d", &col);
	
	
	int a[row][col] ;
	
	printf("Enter Values For Array : \n");
	
	// Getting input for 2D array from user
	for(int i = 0 ; i < row ; i++)
	{
	    for(int j = 0 ; j < col ; j++)
	    {
	        scanf(" %d", &a[i][j] );
	    }
	    printf("\n");
	}
	
	printf("Values of 2D Array : \n");
	
	// Printing the 2D array
	for(int i = 0 ; i < row ; i++)
	{
	    for(int j = 0 ; j < col ; j++)
	    {
	        printf(" %d", a[i][j]);
	    }
	    printf("\n");
	}
	
	return 0;

}