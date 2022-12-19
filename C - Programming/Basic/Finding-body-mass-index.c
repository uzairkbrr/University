#include<stdio.h>
int main(){

	int kg;
	float meter; // Meter can also be in Decimals That why we use float to store decimal values.
	
	printf("Enter Kilogram : ");
	scanf("%d",&kg);
	
	printf("Enter Meter : ");
	scanf("%f",&meter);
	
	// Formula for BMI is Kg/m^2.

	float result = kg/(meter*meter);

	printf("Calculated BMI after Calculation is : %.2f", result); 

	// I use %.2f because i want to print only 2 decimal in Result.
	
	return 0;
}
