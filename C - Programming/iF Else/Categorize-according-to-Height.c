#include<stdio.h>
int main(){

    int height;

    printf("Enter Height : ");
    scanf("%d", &height);

   

    if ( height < 150 ){  // Height LessThen 150 Then Dwarft ;
        printf("Person is Dwarft.");
    }
    else if( height == 150 ) { // Equal to 150 Then Average Height ;
        printf("Person is Average Heighted.");
    }
    else { 
        printf("Person is Tall.");
    }

    return 0;
}