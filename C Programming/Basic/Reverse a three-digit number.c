//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	int number;
	int b, c, d;
	int x;
	int reverse;
	
	printf("Enter a three-digit number: ");
	scanf("%d", &number);
	
	b = number / 100;	 // Extracting the hundreds place digit
	x = number % 100; 	 // Removing the hundreds place digit
	c = x / 10; 		 // Extracting the tens place digit
	d = x % 10;	  	 // Extracting the ones place digit
	
	reverse = d * 100 + c * 10 + b * 1; // Reversing the order of digits
	
	printf("The reverse of %d is: %03d", number, reverse);
	// %03d will print minimum 3 digit output
	// If the output is less than 3 digits, it will add zeros at the beginning
	// If the output is more than 3 digits, it will simply print the output
	
	return 0;

}
