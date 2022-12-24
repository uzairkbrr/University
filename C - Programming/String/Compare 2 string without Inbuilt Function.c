#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char a[20] , b[20];
    bool check=true;
    printf("Enter 1st String : ");
    gets(a);
    printf("Enter 2nd String : ");
    gets(b);
   
    int i=0 ;
    while(a[i] != '\0');
    {
        if(a[i]!=b[i])
            check = false ;
        
        i++;
    }
    
    if(check)
        printf("Given String are Same.");
    else
        printf("Given String are not Same.");
    return 0;
}
