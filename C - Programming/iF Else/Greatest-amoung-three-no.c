#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);
    printf("Enter C : ");
    scanf("%d", &c);

   

    if ( a > b  && a > c){  
        printf("A is Greatest.");
    }
    else if( b > a && b > c ){
        printf("B is Greatest.");
    }
    else { 
        printf("C is Greatest.");
    }

    return 0;
}