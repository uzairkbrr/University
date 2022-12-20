#include <stdio.h>

int main() {

    int A;
    
    printf("Enter an Integar : ");
    scanf("%d", &A);
    
    if ( A % 2 == 0){
        printf("%d is an Even Number.",A);
    }
    else {
        printf("%d is an Odd Number.", A);
    }
    
    return 0;
}