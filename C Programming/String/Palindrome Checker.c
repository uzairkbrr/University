//Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>


void CheckPalindrome(char arr[]);

int main(){
	
	int size = 20 ;
	char arr[size] ;
	int check = 0 ;
	
	printf("Enter Value for String "); 
	gets(arr) ;
	
	CheckPalindrome(arr); // Call the CheckPalindrome function to check if the entered string is a palindrome

	return 0 ;
}

void CheckPalindrome(char arr[]){
	
	int check = 0 ; // Variable to keep track of differences between characters
	int length = strlen(arr); // Length of the input string
	
	for(int i = 0 ; i < length/2 ; i++)
	{
		if( arr[i] != arr[length - 1 - i ] )
			check++ ; // Increment check if characters at symmetric positions are not equal
	}
		
	if(check)
		printf("\nGiven String is not a palindrome."); // Print message if the check is non-zero
	else
		printf("\nGiven String is a palindrome."); // Print message if the check is zero, indicating a palindrome

	
}
