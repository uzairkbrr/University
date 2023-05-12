//Author: Uzair Ahmad

#include <stdio.h>

int main() {
    
	    int x1, x2, y1, y2; // Define variables for coordinates of two points

	// Get the coordinates from user input
	printf("Enter X1 : ");
	scanf("%d", &x1);
	
	printf("Enter X2 : ");
	scanf("%d", &x2);
	
	printf("Enter Y1 : ");
	scanf("%d", &y1);
	
	printf("Enter Y2 : ");
	scanf("%d", &y2);
	
	// Calculate the distance using the distance formula
	int xDiff = x2 - x1;  // Calculate the difference between x2 and x1
	int yDiff = y2 - y1;  // Calculate the difference between y2 and y1
	int xDiffSquared = xDiff * xDiff;  // Square the x difference
	int yDiffSquared = yDiff * yDiff;  // Square the y difference
	float distance = sqrt(xDiffSquared + yDiffSquared);  // Calculate the square root of the sum of the squared differences
	
	// Display the result
	printf("Distance between the two points is: %f\n", distance);
	
	return 0;
}
