//Author: Uzair Ahmad

#include<stdio.h>

int main(){
		
		// Declaring three integer variables
	int a,b,c;
	
	// Prompting user to enter value of variable a and taking input from user
	printf("Enter Number a : ");
	scanf("%d",&a);
	
	// Prompting user to enter value of variable b and taking input from user
	printf("Enter Number b : ");
	scanf("%d",&b);
	
	// Prompting user to enter value of variable c and taking input from user
	printf("Enter Number c : ");
	scanf("%d",&c);
	
	// Performing mathematical operations as per given formula
	int formula = (a*a) + (b*b) + (c*c) + 2*((a*b)+ (b*c) + (c*a));
	
	// Displaying result of mathematical operations
	printf("Answer of (a+b+c)^2 : %d", formula);
	
	
	return 0;
}
