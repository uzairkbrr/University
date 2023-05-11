// Author: Uzair Ahmad

#include<stdio.h>
int main(){

	// Declaring variables to store user input
	int kg;
	float meter; // Meter can also be in decimals, that's why we use float to store decimal values.
	
	// Prompting user to enter values for Kg and Meter
	printf("Enter Kilogram : ");
	scanf("%d",&kg);
	
	printf("Enter Meter : ");
	scanf("%f",&meter);
	
	// Formula for BMI is Kg/m^2.
	float result = kg/(meter*meter);
	
	// Printing the calculated result of BMI
	printf("Calculated BMI after Calculation is : %.2f", result); 
	
	// I use %.2f because I want to print only 2 decimal places in the result.
	
	return 0;
}
