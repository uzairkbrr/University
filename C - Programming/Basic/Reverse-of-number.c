#include<stdio.h>
int main(){
	
	int number;
	int b,c,d; 
	int x; 
	int reverse; 
	
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	b = number / 100 ;	 
	x = number % 100; 	
	c = x / 10; 	
	d = x % 10;	  	   
	
	reverse = d * 100 + c * 10 + b * 1 ;
	
	printf("Reverse of %d is : %03d", number , reverse);
	
	/*	%03d will print minimum 3 digit output...
	if the output is less than 3 digit it will add zeros in beginning
	If output is more than single 3 digits it will simply print output.
 	if output(%d)= 2, with %3d will will be printed as = 002 */
	
	return 0;
}
