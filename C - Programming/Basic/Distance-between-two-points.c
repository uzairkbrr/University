#include <stdio.h>

int main() {
    
    int x1,x2 ,y1,y2 ; // Distance Formula = sqrt( (x2-x1)^2 + (y2-y1)^2 ) ;
    
    printf("Enter X1 : ");
    scanf("%d", &x1);
    
    printf("Enter X2 : ");
    scanf("%d", &x2);
    
    printf("Enter Y1 : ");
    scanf("%d", &y1);
    
    printf("Enter Y2 : ");
    scanf("%d", &y2);
    
    int x3 = (x2-x1)*(x2-x1);  // Finding (x2-x1) ^ 2 ;
    int y3 = (y2-y1)*(y2-y1);  // Finding (y2-y1) ^ 2 ;
    
    float distance = sqrt(x3 + y3); 
    
    printf("Distance is : %f", distance);
    
    return 0;
}
