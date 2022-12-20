#include<stdio.h>
int main(){

    int num1 , num2 ;

    printf("Enter Number one : \n");
    scanf("%d", &num1);

    printf("Enter Number Two : \n");
    scanf("%d", &num2);

    if ( num1 == num2){
        printf("Both Number's are Equal .");
    }
    else {
        printf("Number's are Not Equal.");
    }

    return 0;
}