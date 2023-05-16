//Author: Uzair Ahmad

#include <stdio.h>

int main() {

    int num1 , num2 ;
    
    printf("Enter 1st Number : ");
    scanf("%d", &num1);
    
    printf("Enter 2nd Number : ");
    scanf("%d", &num2);
    
    if(num1 == num2)
    {
    	printf("Both Numbers are Equal");
	}
    else if ( num1 > num2 )
	{
        printf("First Integar %d is Greater then Second integar %d", num1 , num2);
    }
    else 
	{
        printf("Second Integar %d is Greater then First Integar %d", num2 , num1);
    }
    

    return 0;
}