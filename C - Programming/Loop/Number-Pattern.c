#include <stdio.h>

int main(){
	
	int n ;
		
	printf("Enter Number of Row's : ");
	scanf("%d", &n);
	
	
	int i = 1 ;
	while( i <= n )
	{
		
		for(int j = 1; j <= i ; j++)
		{
			
			printf("%d", j);	
				
		}
		i++ ;
		printf("\n");
	}
	
	return 0;
}