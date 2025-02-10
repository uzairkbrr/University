//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	
	int GivenSeconds;
	int Hour,Minute,Second;
	
	// Get the input seconds from user
	printf("Enter the number of seconds: ");
	scanf("%d", &GivenSeconds);
	
	// Calculate the number of hours, minutes and seconds
	Hour = GivenSeconds / 3600;
	Minute = (GivenSeconds % 3600) / 60 ;
	Second = (GivenSeconds % 3600 ) % 60;
	
	// Display the result
	printf("%d Hours, %d Minutes, %d Seconds \n", Hour, Minute, Second);
	
	return 0;
}
