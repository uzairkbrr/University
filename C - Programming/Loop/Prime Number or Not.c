#include <stdio.h>

int main(){
	
	int num,count=0;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(int i=2;i<num/2;i++)
	{
		if(num % i == 0)
		{
			count++ ;
		}
	}
	
	
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