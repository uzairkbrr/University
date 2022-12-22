#include <stdio.h>


int main (){
	
	int number  , Third_No ;
	
	int a = 0 , b = 1 ;
	
	printf("Enter No : ");
	scanf("%d", &number);

	
	for ( int i = 1 ; i <= number ; i++)
	{
	
		printf(" %d ", a);
		
		Third_No = a +  b ;
		a = b ; 
		b = Third_No ;
		
	}
	
	return 0 ;
}
