//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	
	int n , x = 0 , rev = 0 ;

	printf("Enter Number : ");
	scanf("%d", &n);
	
	int i = 1 ;
	
	while ( n != 0)
	{
		x = n % 10 ; // extract the last digit of the number
		rev = rev * 10 + x; // add the extracted digit to the reversed number
		n = n / 10 ; // remove the last digit from the number
		
		i++ ;
	}
		printf("%d", rev); // print the reversed number
	
	return 0;

}