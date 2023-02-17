#include<stdio.h>

int main(){
    
    int deno = 235 ,numi = 2500 ;
    
    printf("Enter Numerator : ");
    scanf("%d", &numi);
    
    printf("Enter Denominator : ");
    scanf("%d", &deno);
    
    int division  = numi / deno ;
    int modulo = numi % deno ;
    
    printf("Quotient = %d", division);
    printf("\nRemainder = %d", modulo);
    
    return 0;
}
