//Author: Uzair Ahmad

#include <stdio.h>

int reverse(int x);

int main() {

    int num ;
    
    printf("Enter any 3 digit Number to Reverse : ");
    scanf("%d", &num);

    int result = reverse(num);
    
    printf("Reverse of %d is %d", num , result);

    return 0;
}
// Function to reverse a three-digit number
int reverse(int x){

	// Extracting the individual digits
	int x1 = x % 10 ; // Extracting the ones place digit
	int a = x / 10 ;
	int x2 = a % 10 ; // Extracting the tens place digit
	int x3 = a / 10 ; // Extracting the hundreds place digit
	
	// Reconstructing the reversed number
	int rev = x1 * 100 + x2 * 10 + x3 * 1 ;
	
    return rev ;
}