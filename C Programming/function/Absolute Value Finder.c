//Author: Uzair Ahmad

#include <stdio.h>

int getAbsolute(int a);

int main() {
  
  	int num ;
  
	printf("Enter Number : ");
	scanf("%d", &num); // Input a number from the user
	
	getAbsolute(num); // Call the getAbsolute function
	
	return 0;

}

// Function to calculate the absolute value of a number
int getAbsolute(int a){
	
	if(a < 0)
	{
		a = a * (-1); // If the number is negative, multiply it by -1 to make it positive
		printf("Absolute Number is %d", a); // Print the absolute value
	}
	else 
	{
		printf("Absolute Number is %d", a); // If the number is already positive, print it as is
	}
}

