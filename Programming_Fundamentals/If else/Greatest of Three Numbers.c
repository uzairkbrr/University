//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter A :");
	scanf("%d", &a);
	
	printf("Enter B :");
	scanf("%d",&b);
	
	printf("Enter C :");
	scanf("%d",&c);
	
	// Check if all three numbers are the same
	if(a == b && b == c)
	{
	    printf("A, B and C are the Same\n");
	}
	// Check if A is the greatest
	else if(a>b && b>c)
	{
	    printf("A is Greatest.");
	}
	// Check if B is the greatest
	else if(b>c)
	{
	    printf("B is Greatest.");
	}
	// C must be the greatest in this case
	else
	    printf("C is Greatest.");
	    
	    
	return 0;

}
