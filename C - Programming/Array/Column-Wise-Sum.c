#include <stdio.h>

int main() {

    int a[3][3] ;
    int colomn[3];
    int sum = 0;
    
    printf("Enter Values for 1st Array \n");
    
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0 ;  j < 3 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Value of Array \n");
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf(" %d", a[i][j]);
        }
        
        printf("\n");
    }
    
    // Finding Sum of Column ;
    
    for(int i = 0 ; i < 3 ; i++)
    {
        sum = 0 ;
        
        for(int j = 0 ; j < 3 ; j++)
        {
            sum = sum + a[j][i] ;
        }
        
        colomn[i] = sum ;
        
    }
    
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Sum of %d Colomn = %d \n", i+1 , colomn[i]);
    }
    
    
    
 
    
    
    
    return 0;
}
