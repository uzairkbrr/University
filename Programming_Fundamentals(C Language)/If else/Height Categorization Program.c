//Author: Uzair Ahmad

#include<stdio.h>
int main(){

    int height;

    printf("Enter Height : ");
    scanf("%d", &height);

   
	// Height LessThen 150 Then Dwarft ;
    if ( height < 150 )
	{  
        printf("Person is Dwarft.");
    }
    // Equal to 150 Then Average Height ;
    else if( height == 150 ) 
	{ 
        printf("Person is Average Heighted.");
    }
    else 
	{ 
        printf("Person is Tall.");
    }

    return 0;
}