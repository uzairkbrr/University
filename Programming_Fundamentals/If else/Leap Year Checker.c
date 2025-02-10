//Author: Uzair Ahmad

#include<stdio.h>
int main(){

  	int Year;
	
	// Prompt the user to input the year
	printf("Enter Year : ");
	scanf("%d", &Year);
	
	// Check if the year is a leap year using the following conditions:
	// - The year must be divisible by 4
	// - If the year is divisible by 100, it must also be divisible by 400
	if ( (Year % 4 == 0) && (Year % 100 == 0) && (Year % 400 == 0))
	{
	    printf("Leap Year.");
	}
	else 
	{
	    printf("Not a Leap Year.");
	}
	
	return 0;

}