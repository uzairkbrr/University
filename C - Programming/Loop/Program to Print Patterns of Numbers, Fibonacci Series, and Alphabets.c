#include <stdio.h>

int main(){
	
	
	int row ;
	int number = 1 ; 
	
	printf("Enter Row's : ");
	scanf("%d", &row);
	
	
	// for 1st pattern ;
	
	printf("\nPattern 1 : \n");
	
	for (int i = 1 ; i<= row ; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			printf("%d ", number);
			
			number++ ;
		}
		printf("\n");
	}
	
	
	// for 2nd Pattern ;
	
	printf("\nPattern 2 : \n");

	for (int i = 1 ; i<= row ; i++)
	{
		
		 int x = 0 , y = 1 ;
		 
		for (int j = 1 ; j <= i ; j++)
		{
			
			printf("%d ", x);
			
			int z = x + y ;
			
			x = y ;
			y = z ;
	
			
		
		
		}

		printf("\n");
	}
	
	
	// for 3rd Pattern ;
	
	printf("\nPattern 3 : \n");

	char alphabet = 'A' ; 

	for (int i = 1 ; i<= row ; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			printf("%c ", alphabet);
			
		
		}
		
		alphabet++ ;
		printf("\n");
	}
	
	return 0 ;
}