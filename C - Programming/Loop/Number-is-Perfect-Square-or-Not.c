
//Check whether a given number is a perfect number or not

#include <stdio.h>

int main(){
	
	int number ;
	int sum = 0 ;
	
	printf("Enter Number to Find Weather it is Perfect Square or Not : ");
	scanf("%d", &number);
	
	
	printf("Perfect Divisor : ");
	for(int i = 1 ; i <= number ; i++){
		
		if(number % i == 0){
			
			printf("%d ", i);
			sum += i ;
		}		
		
	}
	
	printf("\nSum of the Divisor is : %d\n", sum);
	
	if( number == sum/2)
		printf("So %d is Perfect Square.\n", number);
	else 
	printf("So %d is Not Perfect Square .\n", number);
	
	
	return 0 ;
}