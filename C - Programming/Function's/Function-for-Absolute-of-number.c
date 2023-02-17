#include <stdio.h>

int getAbsolute(int a);

int main() {
  
    int num ;
    printf("Enter Number : ");
    scanf("%d", &num);
    
    getAbsolute(num);
    
    return 0;
}

int getAbsolute(int a){
    if(a<0){
        a = a * (-1);
        printf("Absolute Number of is %d", a);
    }
    else {
        printf("Absolute Number is %d", a);
    }
}

