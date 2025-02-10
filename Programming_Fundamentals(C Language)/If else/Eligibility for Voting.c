//Author: Uzair Ahmad

#include<stdio.h>
int main(){

    int age;

    printf("Enter Year : ");
    scanf("%d", &age);

    if (age >= 18)
	{
        printf("Congratulation ! You are eligible for Casting Your Vote.");
    }
    else 
	{
        printf("Sorry, You are not eligible to caste your vote.");
    }

    return 0;
}
