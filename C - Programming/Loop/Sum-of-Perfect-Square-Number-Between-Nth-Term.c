#include <stdio.h>

int main (){
	
	int term , sum = 0 ;
	
	printf("Enter Nth Term : ");
	scanf("%d", &term);
	
	for (int i = 1 ; i <= term ; i++){
		
		int Perfect_Square = i*i ;
		printf("%d ", Perfect_Square);
		
		sum += Perfect_Square ;
	}
	
	printf("\nSum of Perfect Square numbers till %d Term  is %d ", term , sum );
	
	
	return 0 ;
}