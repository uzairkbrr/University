//Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char a[20] ;
    
    printf("Type Something : ");
    gets(a);
    
    int i=0;
    while(a[i]!='\0'){
        i++ ;
    }
    
    printf("Lenght of String : %d ", i);

    return 0;
}