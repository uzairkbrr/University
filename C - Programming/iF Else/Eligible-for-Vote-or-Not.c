#include<stdio.h>
int main(){

    int vote_age;

    printf("Enter Year : ");
    scanf("%d", &vote_age);

   

    if ( vote_age >= 18){
        printf("Congratulation ! You are eligible for Casting Your Vote.");
    }
    else {
        printf("Sorry, You are not eligible to caste your vote.");
    }

    return 0;
}
