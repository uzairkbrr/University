//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int n ;
	
	printf("Enter Number of Row's : ");
	scanf("%d", &n);
	
	for (int i = 1  ; i <= n ; i++) // Loop to print rows
	{
		for( int space = n ; space > i ; space--) // Loop to print spaces before stars
		{
			printf(" ");
		}
		
		for(int j = 1 ; j <= i * 2 - 1 ; j++) // Loop to print stars
		{		
			printf("*");
		}
		
		printf("\n"); // Move to next line
	}
	
	return 0 ;

}