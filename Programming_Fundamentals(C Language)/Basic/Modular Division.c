//Author: Uzair Ahmad

#include<stdio.h>

int main(){
    
   int deno, numi ;

	printf("Enter Numerator : ");
	scanf("%d", &numi);
	
	printf("Enter Denominator : ");
	scanf("%d", &deno);
	
	int division  = numi / deno ; // calculate the quotient of division
	int modulo = numi % deno ; // calculate the remainder of division
	
	printf("Quotient = %d", division); // print the quotient
	printf("\nRemainder = %d", modulo); // print the remainder
	
	return 0;
}
