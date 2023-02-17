#include <stdio.h>

int main(){
	
	int n ;
	
	printf("Enter Number of Row's : ");
	scanf("%d", &n);
	
	for (int i = 1  ; i <= n ; i++) // This loop is used for new line ;
	{
		
		for( int space = n ; space > i ; space--) // This loop is used for spacing ;
		{
			printf(" ");
		}
		
		for(int j = 1 ; j <= i * 2 - 1 ; j++) // This loop is used for printing Starik " * " ;
		{
			
			printf("*");
		}
		
		printf("\n");
		
	}
	
	
	return 0 ;
}