//Author: Uzair Ahmad

#include<stdio.h>
int main(){

    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    if ( num >= 0)
	{
        printf("Positive Number.");
    }
    else 
	{
        printf("Negative Number.");
    }

    return 0;
}