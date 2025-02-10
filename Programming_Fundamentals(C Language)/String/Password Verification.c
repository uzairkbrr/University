// Author: Uzair Ahmad

#include <stdio.h>
#include <string.h>

int main(){
	
	char name[20]; // Array for Name ;
	char yesno; 
	char password[20];  // Array for Password ;
	char passwordagain[20]; // Array for 2nd Password ; 
	int length = 0;  // Length of Password string ;
	int count = 0;
	int againcount = 0; // This is for taking Password 2nd time from user for confirmation.
	
	printf("\nEnter Your Name: ");
	scanf("%s", &name);
	
	printf("\n\nEnter Your Password: ");
	scanf("%s", &password);	
	
	do {
	
		length = 0; // Length of String ;
		againcount = 0;
	
		yesno = 'y'; // By default, we assume "yes".
	
		for(int i = 0; password[i] != '\0' ; i++) // "\0" indicates the end of the string. Loop until the end of the string.
		{ 
			length++;
		}
	
		if(length >= 8) // Password length must be equal to or greater than 8 letters.
		{
	    
			for(int i = 0 ; i < length ; i++)
	    	{
				if(password[i] == '%' || password[i] == '!' || password[i] == '*' || password[i] == '^' || password[i] == '&')
	        	{
					count++;
				}
			}
			if(count != 0) // If count is not equal to 0, it means that the password contains special characters.
	        {
				printf("\nEnter Your Password Again For The Secret Message: ");
				scanf("%s",passwordagain);
			
				for(int i = 0 ; i < length ; i++)
				{
					if(passwordagain[i] == password[i])
	            	{
						againcount++;
					}
					else
					{
			    		printf("\nPassword Does Not Match");
						yesno = 'n';
						break;
					}
	        	}
				
				if(againcount == length)
	            {
					printf("\nOpen Your Door! It's FBI.");
					yesno = 'y';
				}
			}
			else
	        {
				printf("Password Must Contain At Least 1 Special Character e.g. !, %, ^, &, *");
				yesno = 'n';
			}
		
		}
		else
		{
	    
			printf("\nYour Password Must Be Greater Than or Equal to 8 Letters");
		
			printf("\nPlease Enter Your Password Again: ");
			scanf("%s", &password);
		
			yesno = 'n';
		}
	
	} while(yesno == 'n');
	
	return 0;

}