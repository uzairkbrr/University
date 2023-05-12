//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	
	// Initialize hours variable with value 50
	int hours ;
	
	printf("Enter Hours => ");
	scanf("%d", &hours);
	
	// Convert hours to minutes by multiplying with 60 and store in minutes variable
	int minutes = hours * 60;
	
	// Print the result with a message
	printf("\n%d Hours is %d Minutes.\n", hours , minutes);
	
	// Convert hours to seconds by multiplying with 3600 and store in seconds variable
	int seconds = hours * 3600 ;
	
	// Print the result with a message
	printf("\n%d Hours is %d Seconds.", hours , seconds);
	
	return 0;
}