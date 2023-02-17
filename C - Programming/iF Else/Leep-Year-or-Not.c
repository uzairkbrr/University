#include<stdio.h>
int main(){

    int Year;

    printf("Enter Year : ");
    scanf("%d", &Year);

   

    if ( Year % 4 == 0 && Year % 100 == 0 && Year % 400 == 0){
        printf("Leep Year.");
    }
    else {
        printf("Not a Leep Year.");
    }

    return 0;
}