//Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>

int main() {
 
	int size;
	
	printf("Enter Size for Array: "); 
	scanf("%d", &size);
	
	char name[size];
	char name2[size];
	
	strcpy(name2 , name); // Copying the contents of 'name' to 'name2'
	
	printf("Name After Updating: "); puts(name2);
	
	return 0;

}
