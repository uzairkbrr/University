#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char a[20] ;
    
    printf("Type Something : ");
    gets(a);
   
   int length = strlen(a);
   
   printf("\nGiven String in Reverse Form : ");
   for(int i=length;i>=0;i--)
   {
       printf(" %c", a[i]);
   }
   

    return 0;
}