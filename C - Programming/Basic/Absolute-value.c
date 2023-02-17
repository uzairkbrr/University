// Author = Uzair Ahmad ;
#include<stdio.h>
#include<stdlib.h>

int main(){
    
   int x,y ;
    
	printf("Enter 1st Number : ");
   	scanf("%d", &x);
    
   	printf("Enter 2nd Number : ");
   	scanf("%d", &y);
    
    printf("Absolute value of %d is %d \n", x , labs(x));
    printf("Absolute value of %d is %d \n", y , labs(y));
    
    
    return 0;
}
