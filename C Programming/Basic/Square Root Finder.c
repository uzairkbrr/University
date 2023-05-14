//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	int a,b ;

	printf("Enter a number to find its square root: ");
	scanf("%d", &a);
	
	b = sqrt(a); // Finding square root of 'a' using sqrt() function from math.h library.
	
	printf("Square root of %d is %d",a , b);
	
	return 0;

}
