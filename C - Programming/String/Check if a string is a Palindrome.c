#include <stdio.h>
#include <string.h>


void CheckPalindrome(char arr[]);

int main(){
	
	int size = 20 ;
	char arr[size] ;
	int check = 0 ;
	
	printf("Enter Value for String "); gets(arr) ;
	
	CheckPalindrome(arr);


	return 0 ;
}

void CheckPalindrome(char arr[]){
	
	int check = 0 ;
	int length = strlen(arr);
	
	for(int i = 0 ; i < length/2 ; i++)
	{
		if( arr[i] != arr[length - 1 - i ] )
			check++ ;
	}
		
	if(check)
		printf("\nGiven String is not a palindrome.");
	else
		printf("\nGiven String is a palindrome.");
	
	
}
