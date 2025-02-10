//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	// Input the previous reading
	int previous_units;
	printf("Enter Previous Units : ");
	scanf("%d", &previous_units);
	
	// Input the present reading
	int present_units;
	printf("Enter Present Units : ");
	scanf("%d", &present_units); 
	
	// Calculate the units consumed in the current month
	int october_units =  present_units - previous_units ; 
	
	// Calculate the total bill for the current month
	int total_bill = october_units * 5 ; // 1 Unit price is 5 Rs ;
	
	// Display the units consumed and the total bill amount
	printf("Units Consumed in October: %d \n",october_units);
	printf("Total Bill Amount: Rs %d \n", total_bill);
	
	return 0; 

}
