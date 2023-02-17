#include <stdio.h>

int main() {

    char a[20] ;
    
    printf("Enter Something : ");
    gets(a);
    
    int digit=0,alphabet=0,special=0;
    
    int i=0 ;
    while(a[i] != '\0')
    {
        if( ( a[i] >= 'a' && a[i] <= 'z') || ( a[i] >= 'A' && a[i] <= 'Z') )
            alphabet++ ;
            
        else if( a[i] >= '0' && a[i] < '9')
            digit++ ;
        else 
            special++ ;
            
    i++ ;
    }
    
    
    printf("Digit : %d\n",digit);
    printf("Alphabet : %d\n", alphabet);
    printf("Special Word: %d\n", special);
    return 0;
}