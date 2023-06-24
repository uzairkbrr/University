//Author: Uzair Ahmad

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
	
	// if both strings are the same, the output is 0.
	// if the strings are not the same, the output is 1 or -1, depending on the lexicographic comparison.
	int num = strcmp(name , name2) ;
	
	printf(" %d", num);
	
	return 0;

}
