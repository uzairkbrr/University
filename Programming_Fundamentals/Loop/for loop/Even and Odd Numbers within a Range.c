// Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int num1,num2;
	
	// Prompt the user to enter the range of numbers
	printf("Enter 1st Number of Range : ");
	scanf("%d",&num1);
	printf("Enter 2nd Number of Range : ");
	scanf("%d",&num2);
	
	// Print all even numbers within the range
	printf("Ever Number : ");
	for(int i=num1;i<num2;i++)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}
	
	// Print all odd numbers within the range
	printf("\nOdd Number : ");
	for(int i=num1;i<num2;i++)
	{
		if(i % 2 != 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}