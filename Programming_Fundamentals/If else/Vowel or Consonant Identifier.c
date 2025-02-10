//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	
    char input ;

	printf("Enter Character : ");
	scanf("%c", &input);
	
	// check if input is an alphabet
	if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) 
	{
	    
	    // check if the input is a vowel or a consonant
	    if(input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U') 
		{
	        
	        printf("\n%c is Vowel.\n",input);
	    }
	    else 
		{
	        
	        printf("\n%c is Consonant\n", input);
	    }
	}
	else 
	{
	    printf("\nEnter Valid Input. \n");
	}
	
	return 0;

    
}