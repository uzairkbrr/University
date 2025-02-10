//Author: Uzair Ahmad

#include <stdio.h>

int main() {
	
	char a[50] ;
	
	printf("Enter Something : ");
	gets(a);
	
	int digit=0,alphabet=0,special=0;
	
	int i=0 ;
	
	// Iterate through each character in the input string
	while(a[i] != '\0')
	{
	    if( ( a[i] >= 'a' && a[i] <= 'z') || ( a[i] >= 'A' && a[i] <= 'Z') )
	        alphabet++ ; // Increment alphabet count if the character is an alphabet
	        
	    else if( a[i] >= '0' && a[i] < '9')
	        digit++ ; // Increment digit count if the character is a digit
	    
	    else 
	        special++ ; // Increment special character count if the character is neither an alphabet nor a digit
	        
	    i++ ;
	}
	
	// Print the counts of digits, alphabets, and special characters
	printf("Digit : %d\n",digit);
	printf("Alphabet : %d\n", alphabet);
	printf("Special Word: %d\n", special);
	
	return 0;

    
    return 0;
}