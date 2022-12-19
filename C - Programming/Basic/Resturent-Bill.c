#include<stdio.h>
int main(){
	
	int meal ;
	
	printf("Enter Meal Price :");
	scanf("%d", &meal);
	
	float tax = 4.75 / 100 * meal ; // Tax is 4.75 % of Meal ;
	
	float total = tax + meal ; 
	
	float tip = 10.0 / 100.0 * total ; // Tip is 10% of ( Meal + Tax ) ;
	
	float total_bill = meal + tax + tip ; // Total bill = Meal + Tax + Tip ;
	
	printf("Meal Cost : %d \n", meal );
	
	printf("Tax Cost : %.2f \n", tax);
	
	printf("Tip Cost : %.2f \n", tip);
	
	printf("Total Bill Including Meal , Tax , Tip : %.2f", total_bill);
	
}
