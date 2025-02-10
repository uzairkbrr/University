//Author: Uzair Ahmad

#include<stdio.h>

int pizza(); // Function Declaration ;

int main(){
	
	int answer = pizza(); // Calling the pizza function
	
	printf("\n\nNumber of Slices is : %d", answer); // Printing the result
	return 0;

}

int pizza(){
	
	float pi = 3.14 ; // Value of pi
	float area, diameter; 
	
	printf("Enter Diameter of Pizza => ");
	scanf("%f", &diameter);
	
	float radius = diameter / 2 ; // Radius of the pizza
	
	printf("Enter Area for Single Slice => ");
	scanf("%f", &area);
	
	float formula = pi * ( radius * radius ) ; // Calculate the area of the whole pizza
	
	int result = formula / area ; // Divide the area of the whole pizza by the area of a single slice to get the number of slices
	
	return result; // Return the result

}
