#include <stdio.h>

int main() {
   
    int cor1 , cor2 ;
    printf("Enter X : ");
    scanf("%d", &cor1);
    printf("Enter Y :");
    scanf("%d", &cor2);
    
    if ( cor1 > 0 && cor2 > 0){
        printf("Cordinate's Lies In 1st Quadent.");
    }
    else if ( cor1 < 0 && cor2 > 0){
        printf("Cordinate's Lies In 2nd Quadent.");
    }
    else if (cor1 < 0 && cor2 < 0){
        printf("Cordinate's Lies In 3rd Quadent.");
    }
    else if (cor1 > 0 && cor2 < 0){
        printf("Cordinate's Lies in 4th Quadent.");
    }
    else {
        printf("Cordinate's Lies on Origin.");
    }
    return 0;
}