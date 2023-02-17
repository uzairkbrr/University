#include <stdio.h>

int main(){
	
	int rows ;
	
	printf("Enter Row's : ");
	scanf("%d", &rows);
	
	
	for (int i = 1 ; i <= rows ; i++)
	{
		
		for(int space = rows ; space > i ; space--)
		{
			printf(" ");
		}
		
		for(int k = 1 ; k <= 2*i-1 ; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	

	return 0 ;
	
}
