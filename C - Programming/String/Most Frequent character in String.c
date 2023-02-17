#include <stdio.h>
#include <string.h>

int main() {

    char string[20];
    gets(string);
    
    int count=0,maxcount=0;
    char maxelement ;
    
    for(int i=0;i<strlen(string);i++)
    {
        count=0;
        for(int j=i+1;j<strlen(string);j++)
        {
            if(string[i] == string[j])
            {
                count++ ;
            }    
            
            if(maxcount < count)
            {
                maxcount=count;
                maxelement=string[j];
            }
        }
    }
    printf("Maximum element is %c ", maxelement);
    printf("\nit's appear %d time's", maxcount+1);
    
    return 0;
}