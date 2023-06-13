//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	// Initialize variables
	int size, sum1 = 0, sum2 = 0;
	
	// Prompt user to enter the size of square matrix
	printf("Enter the Dimension of Square Matrix : ");
	scanf(" %d", &size);
	
	// Declare the 2D array
	int arr[size][size];
	
	// Take input from user for each index of the array
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        printf("Enter Value for Index %d%d : ", i , j);
	        scanf(" %d",&arr[i][j]);
	        printf("\n");
	    }
	}
	
	// Display the original matrix
	printf("\nOrigional Matrix : \n");
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        printf(" %d",arr[i][j]);
	    }
	    printf("\n");
	}
	
	// Calculate the diagonal sums
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        if(i==j)
	        {
	            sum1 += arr[i][j] ;
	        }
	        if((i+j) == (size-1))
	            sum2 += arr[i][j] ;
	    }
	}
	
	// Display the diagonal sums
	printf("\nSum of Left Diagonal : %d\n", sum1 );
	printf("Sum of Right Diagonal : %d\n", sum2 );
	
	return 0 ;

}
