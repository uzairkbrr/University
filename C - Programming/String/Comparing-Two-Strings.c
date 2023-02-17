#include <stdio.h>
#include <string.h>

int main() {
 
 int size ;

 printf("Enter Size for Array ");
 scanf("%d" , &size);
 
 
 char name[size] ;
 char name2[size] ;
 
 printf("Enter 1st Name "); gets(name);
 printf("\nEnter 2nd Name "); gets(name2);
 
 // if both string are same then output is 0 , & if strings are not same then output is 1 & -1 ;

  int num = strcmp(name , name2) ;
 
 printf(" %d", num);
 
    return 0;
}
