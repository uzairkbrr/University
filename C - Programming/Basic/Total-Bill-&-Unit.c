#include<stdio.h>
int main(){
	
	int previous_units;
	printf("Enter Previous Units : ");
	scanf("%d", &previous_units);
	
	int present_units;
	printf("Enter Present Units : ");
	scanf("%d", &present_units); 
	
	int october_units =  present_units - previous_units ; // Finding October Month Units from All Units ;
	
	int total_bill = october_units * 5 ; // 1 Unit price is 5 Rs ;
	
	printf("Present Units : %d \n",october_units);
	
	printf("Total Bill : %d \n", total_bill);
	
	return 0; 
}
