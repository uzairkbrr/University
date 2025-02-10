//Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>

int main() {

    char string[20], ch;
    gets(string);
   
   int l = strlen(string);
   
   for(int i=0;i<l;i++)
   {
       for(int j=0;j<l;j++)
       {
        if(string[i]<string[j])
        {
            ch = string[j] ;
            string[j]= string[i];
            string[i]=ch;
        }
       }
   }
   
   printf("String After Sorting: ");
   printf("%s", string);
   
    return 0;
}