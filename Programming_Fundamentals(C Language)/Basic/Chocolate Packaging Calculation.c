//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int numberofchoclate ;
	
	printf("Enter Number of Chocolate's : ");
	scanf("%d", &numberofchoclate);
	
	int noofbox = numberofchoclate / 22 ; // For Number of Boxes ( 22 Chocolates in Box so We divide it on 22 )
	int remainingChocolates = numberofchoclate % 22 ; // For Remaining Chocolates ( We take % Its give us the remaining Chocolates after calculating No of Boxes ; 
	int noofcontainer = noofbox / 55 ; // One Container Contain 55 Boxes so We Divide it on 55 ;
	int remainingboxes = noofbox % 55 ; // Remaining Boxes ( after Division by 55  the remaining Boxes is Outside from Container ;
	
	printf("Number of Container : %d \n", noofcontainer);
	printf("Number of Boxes : %d \n", noofbox);
	printf("Remaining Boxes : %d \n", remainingboxes);
	printf("Remaining Chocolate's : %d \n", remainingChocolates);

	return 0 ;
}