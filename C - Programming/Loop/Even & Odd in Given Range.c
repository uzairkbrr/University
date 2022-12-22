#include <stdio.h>

int main(){
	
	int num1,num2;
	
	printf("Enter 1st Number of Range : ");
	scanf("%d",&num1);
	printf("Enter 2nd Number of Range : ");
	scanf("%d",&num2);
	
	
	printf("Ever Number : ");
	for(int i=num1;i<num2;i++)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}
	
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