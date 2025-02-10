//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int row, col;
	
	printf("Enter Rows => ");
	scanf("%d", &row);
	
	printf("\nEnter Columns => ");
	scanf("%d", &col);
    
	 int arr[row][col] ;
	
	printf("Enter Values for Array \n");
	
	// Getting input from user
	for(int i = 0 ; i < row ; i++)
	{
	    for(int j = 0 ; j < col ; j++)
	    {
	        scanf(" %d ", &arr[i][j]);
	    }
	}
	
	// Printing input values
	printf("Entered Array: \n");
	for(int i = 0 ; i < row ; i++)
	{
	    for(int j = 0 ; j < col ; j++)
	    {
	        printf(" %d", arr[i][j]);
	    }
	    printf("\n");
	}
	
	int min = arr[0][0] ;
	
	// Finding minimum value in array
	for(int i = 0 ; i < row ; i++)
	{
	    for(int j = 0 ; j < col ; j++)
	    {
	       if (min > arr[i][j])
	            min = arr[i][j] ;
	    }
	}
	
	// Printing minimum value
	printf("Minimum Number in the above Array = %d", min);
	
	return 0;

}