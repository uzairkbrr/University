//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	// Taking input from user for size of arrays
	int size;
	
	printf("Enter Size for 2D Array => ");
	scanf("%d", &size);
	
	// Declaring two 2D arrays and an array to store sum of rows
	int a[size][size] , b[size][size] ;
	int c[size] ;
	
	// Taking input values for first 2D array
	printf("Enter Number of 1st Array \n");
	for(int i =0 ; i < size ; i++)
	{
		for(int j = 0 ;  j < size ; j++)
		{
			scanf(" %d" , &a[i][j]);
		}
	}
	
	// Taking input values for second 2D array
	printf("Enter Number of 2nd Array \n");
	for(int i =0 ; i < size ; i++)
	{
		for(int j = 0 ;  j < size ; j++)
		{
			scanf(" %d" , &b[i][j]);
		}
	}
	
	// Calculating sum of each row and storing it in the array c
	for(int i = 0 ;  i < size ; i++)
	{
		int sum = 0 ;
		
		for(int j = 0 ; j < size ; j++)
		{
			sum = a[i][j] + b[i][j] ;
		}
		
		c[i] = sum ;
	}
	
	// Printing sum of each row of the array
	printf("Sum of Row's of the Array  \n");
	for(int i = 0 ;  i < size ; i++)
	{
		printf("Sum of Row %d = %d\n", i+1, c[i]);
	}
	
	return 0 ;

}
