//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int number ;
	int sum = 0 ;
	
	printf("Enter Number to Find Weather it is Perfect Square or Not : ");
	scanf("%d", &number);
	
	// Loop to find the perfect divisors of the input number
	printf("Perfect Divisor : ");
	for(int i = 1 ; i <= number ; i++)
	{	
		if(number % i == 0){
			// If a perfect divisor is found, it is printed to the console and added to the sum variable.
			printf("%d ", i);
			sum += i ;
		}		
	}
	
	// Prints the sum of the perfect divisors of the input number.
	printf("\nSum of the Divisor is : %d\n", sum);
	
	// Checks whether the input number is a perfect square or not, based on the sum of its perfect divisors.
	if(number == sum/2)
		printf("So %d is Perfect Square.\n", number);
	else 
		printf("So %d is Not Perfect Square .\n", number);
	
	return 0 ;

}