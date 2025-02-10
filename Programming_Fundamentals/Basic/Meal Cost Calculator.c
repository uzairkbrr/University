//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	int meal ;
	
	printf("Enter Meal Price :"); // Prompting user to enter Meal Price.
	scanf("%d", &meal); // Scanning user input for Meal Price.
	
	float tax = 4.75 / 100 * meal ; // Calculating Tax which is 4.75% of Meal.
	float total = tax + meal ; // Calculating Total which is Meal + Tax.
	float tip = 10.0 / 100.0 * total ; // Calculating Tip which is 10% of (Meal + Tax).
	float total_bill = meal + tax + tip ; // Calculating Total Bill which is Meal + Tax + Tip.
	
	printf("Meal Cost : %d \n", meal ); // Printing Meal Cost.
	printf("Tax Cost : %.2f \n", tax); // Printing Tax Cost upto 2 decimal places.
	printf("Tip Cost : %.2f \n", tip); // Printing Tip Cost upto 2 decimal places.
	printf("Total Bill Including Meal , Tax , Tip : %.2f", total_bill); // Printing Total Bill upto 2 decimal places.
	
	return 0; 

}
