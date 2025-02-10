//Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>

int main() {
  
    char name[20] ; 
    char dob[10] ;
    char cnic[15] ;
    
    printf("Enter Your Name ");
    gets(name);
    
    printf("\nEnter Your Date of Birth ");
    gets(dob);
    
    printf("\nEnter Your Cnic ");
    gets(cnic);
    
    
    printf("Your Date : \n");
    printf("\n\nYour Name is "); puts(name);
    printf("Your Date of Birth is ");   puts(dob);
    printf("Your Cnic is "); puts(cnic);
    
    

    return 0;
}
