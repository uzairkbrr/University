// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[4][4] ;
    
    printf("Enter Values For Array : \n");
    
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            scanf(" %d", &a[i][j] );
        }
        printf("\n");
    }

    printf("Values You Enter : \n");
    
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}