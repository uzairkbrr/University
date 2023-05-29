//Author: Uzair Ahmad

#include <stdio.h>

int main (){
	
	int term , sum = 0 ;

	printf("Enter Nth Term : ");
	scanf("%d", &term);
	
	int i=1;
	while(i	<= term)
	{
		int Perfect_Square = i*i ; // find perfect square of the ith term
		printf("%d ", Perfect_Square); // print the perfect square of the ith term
		
		sum += Perfect_Square ; // add the perfect square to sum
		i++;
	}
	
	printf("\nSum of Perfect Square numbers till %d Term  is %d ", term , sum );
	
	return 0 ;

}