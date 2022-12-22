#include <stdio.h>

int main(){
	
	int sum = 0 ;
	int  term , number ; 
	
	printf("Enter Number for which You Want to Print Series : ");
	scanf("%d", &number);
	
	int extra = number ; 
	
	printf("Enter nth Term : ");
	scanf("%d", &term);
	
	for(int i = 1 ; i <= term ; i++){
		
		
		sum += number ;
		
		printf("%d ", number);
		
		if(i < term)
			printf("+ ");

		number = number * 10 + extra ;
		
	}
	
	printf("\nSum is : %d", sum);
	
	return 0;
}