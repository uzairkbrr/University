//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	    
	int arr[3][3] ;
	
	// Taking input values for 2D Array
	printf("Enter Values for Array \n");
	for(int i = 0 ; i < 3 ; i++)
	{
	    for(int j = 0 ; j < 3 ; j++)
	    {
	        scanf(" %d ", &arr[i][j]);
	    }
	}
	
	// Printing the 2D Array
	printf("2D Array:\n");
	for(int i = 0 ; i < 3 ; i++)
	{
	    for(int j = 0 ; j < 3 ; j++)
	    {
	        printf(" %d", arr[i][j]);
	    }
	    printf("\n");
	}
	
	// Finding maximum number in the 2D Array
	int max = arr[0][0] ;
	for(int i = 0 ; i < 3 ; i++)
	{
	    for(int j = 0 ; j < 3 ; j++)
	    {
	       if (max < arr[i][j])
	            max = arr[i][j] ;
	    }
	}
	
	// Printing the maximum number
	printf("Maximum Number in the above Array = %d", max);
	
	return 0;

}
