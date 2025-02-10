//Author: Uzair Ahmad

#include <stdio.h>

int main() {

	int size;
	
	// Asks the user to enter the size of the square matrix
	printf("Enter Size for Matrix => ");
	scanf("%d", &size);
	
	// Declares an array of size N x N and an array to store the sum of each column
	int a[size][size] ;
	int colomn[size];
	int sum = 0;
	
	// Asks the user to input the values of the matrix
	printf("Enter Values for 1st Array \n");
	
	// Nested for loop to traverse the matrix
	for(int i = 0 ; i < size; i++)
	{
	    for(int j = 0 ;  j < size ; j++)
	    {
	    	// Asks the user to enter the value at the (i, j) index
	    	printf("Index No [%d][%d] = ",i,j);
	        scanf("%d", &a[i][j]);
	    }
	}
	
	// Prints the matrix
	printf("\n\n Value of Array :\n");
	
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        printf(" %d", a[i][j]);
	    }
	    
	    printf("\n");
	}
	
	// Calculates the sum of each column
	for(int i = 0 ; i < size ; i++)
	{
	    sum = 0 ;
	    
	    for(int j = 0 ; j < size ; j++)
	    {
	        sum = sum + a[j][i] ;
	    }
	    
	    colomn[i] = sum ;
	    
	}
	
	// Prints the sum of each column
	for(int i = 0 ; i < size ; i++)
	{
	    printf("Sum of Colomn %d = %d \n", i+1 , colomn[i]);
	}
	
	return 0;

}
