#include <stdio.h>

int main(){
	
	
	int a[3][3] , b [3][3] ;
	
	int c[3] ;
	
	printf("Enter Number of 1st Array \n");
	
	for(int i =0 ; i < 3 ; i++)
	{
		for(int j = 0 ;  j < 3 ; j++)
		{
			scanf(" %d" , &a[i][j]);
		}
	}
	
	printf("Enter Number of 2nd Array \n");

	
		for(int i =0 ; i < 3 ; i++)
	{
		for(int j = 0 ;  j < 3 ; j++)
		{
			scanf(" %d" , &b[i][j]);
		}
	}
	
	for(int i = 0 ;  i < 3 ; i++)
	{
		
		int sum = 0 ;
		
		for(int j = 0 ; j < 3 ; j++)
		{
			sum = a[i][j] + b[i][j] ;
		}
		
		c[i] = sum ;
	}
	
	printf("Sum of Row's of the Array  \n");
	
	for(int i = 0 ;  i < 3 ; i++)
	{
		printf("Sum of %d Row = %d\n", i+1, c[i]);
	}
	
	return 0 ;
}
