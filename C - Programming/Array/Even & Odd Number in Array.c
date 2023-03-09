//Write a program that takes 10 values from user, stores it in array and
//displays the no of even and odd numbers along with the number.

#include <stdio.h>

int main(){
	
	int size ;

	printf("Enter Size for Array : ");
	scanf(" %d", &size) ;

	int number[size];
	
	// Getting Input from User ;
	
	printf("Enter %d Number of Your Wish : \n",size);
	
	for(int i = 0 ; i < size; i++)
	{
		scanf("%d" , &number[i]);
	}
	
	// Printing the Number Which You Enter ;
	
	printf("You Enter the Following Number's => \n ");
	
	for(int i = 0 ; i < size; i++)
	{
		printf("%d ", number[i]);
	}
		
	printf("\nEven Numbers => \n ");
		
	// Checking Even Numbers ;
	for(int i = 0 ; i < size; i++)
	{
		if( number[i] % 2 == 0)
		{
			printf("%d ", number[i]);
		}
	}
	
	printf("\nOdd Numbers => \n");
		
	// Checking Odd Numbers ;
	for(int i = 0 ; i < size; i++)
	{
		if( number[i] % 2 != 0)
		{
			printf("%d ", number[i]);
		}
	}
	
	return 0 ;
}