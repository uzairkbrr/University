//Author: Uzair Ahmad
	
#include <stdio.h>
	
int main(){
			
	int num,count=0;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	// Check for factors from 2 to num/2
	for(int i=2;i<num/2;i++)
	{
		if(num % i == 0)
		{
			count++ ;
		}
	}
	
	// Check if count is still 0, then number is prime
	if(count==0)
	{
		printf("Prime Number.");
	}
	else 
	{
		printf("Not Prime Number.");
	}
	
	return 0;

}