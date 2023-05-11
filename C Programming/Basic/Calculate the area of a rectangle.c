// Author: Uzair Ahmad

#include<stdio.h>

int main(){

	// Declare variables to hold the two sides of the rectangle
 	int length;
	int width;
	
	// Prompt user to enter the length of the rectangle
	printf("Enter length :");
	scanf("%d", &length);
	
	// Prompt user to enter the width of the rectangle
	printf("Enter width :");
	scanf("%d", &width);
	
	// Calculate the area of the rectangle using the formula: Length * width
	int area = length * width;

	// Display the calculated area of the rectangle to the user
	printf("Area of Rectangle is : %d",area);

	return 0;
}