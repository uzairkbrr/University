// Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int factorial ;
	int product = 1 ; //initialize the product to 1 since we'll be multiplying it
	
	printf("Enter Factorial Which You want to Find : ");
	scanf("%d", &factorial); //prompt user to enter the number whose factorial they want to find
	
	int i = factorial ; //initialize the variable i to the value of the input number
	
	// loop from i to 1 and multiply each number with the previous to find the factorial
	while( i > 0 ){
		
		product = product * i ; //multiply the current value of product with i
		
		i-- ; //decrement i to move to the next lower number in the factorial sequence
	}
	
	//print the factorial of the input number
	printf("Factorial of %d is %d", factorial , product);
	
	return 0 ;
}