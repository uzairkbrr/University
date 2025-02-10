//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int sum = 0 ;
	int term, number; 
	
	// Taking input for the number for which we want to print the series
	printf("Enter Number for which You Want to Print Series: ");
	scanf("%d", &number);
	
	int extra = number ; 
	
	// Taking input for the nth term
	printf("Enter nth Term: ");
	scanf("%d", &term);
	
	for(int i = 1 ; i <= term ; i++){
		
		// Calculating the sum of the series
		sum += number ;
		
		// Printing the series
		printf("%d ", number);
		
		if(i < term)
			printf("+ ");
	
		// Calculating the next number of the series
		number = number * 10 + extra ;
		
	}
	
	printf("\nSum is: %d", sum);
	
	return 0;

}