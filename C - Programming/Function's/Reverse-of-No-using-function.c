#include <stdio.h>

int reverse(int x);

int main() {

    int num = 987 ;

    int result = reverse(num);
    
    printf("Reverse of %d is %d", num , result);

    return 0;
}

int reverse(int x){
    
   int  x1 = x % 10 ;
   int  a  =  x / 10 ;
   int  x2 = a % 10 ;
   int  x3 = a / 10 ;
    
   int rev = x1 * 100 + x2 * 10 + x3 * 1 ;
    
    return rev ;
}