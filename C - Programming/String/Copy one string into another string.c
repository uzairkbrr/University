#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
    char string1[100], string2[100];

    printf("Input the string : ");
    fgets(string1, sizeof string1, stdin);
	   
  
    int i=0;
    
    while(string1[i]!='\0')
    {
        string2[i] = string1[i];
        i++;
    }

    // Makes sure that the string is NULL terminated
    string2[i] = '\0';

    printf("\nThe First string is : %s\n", string1);
    printf("The Second string is : %s\n", string2);
    printf("Number of characters copied : %d\n\n", i);
}