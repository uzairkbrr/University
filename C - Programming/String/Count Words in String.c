#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void main()
{
	int str_size ;

    
    printf("------------------------------------------------------\n");
	printf("Enter Size for String : ");
	scanf("%d", &str_size);
			    	
  	char str[str_size];	
    
	printf("Input the string : ");
    fgets(str, sizeof str, stdin);	
	
   
    int word = 1;

    int  i = 0;
    while(str[i]!='\0')
    {
      
        if(str[i]==' ' || str[i]=='\t')
        {
            word++;
        }

        i++;
    }

    printf("Total number of words in the string is : %d\n", word);
    
    printf("------------------------------------------------------\n");

}
