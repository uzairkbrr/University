// i write this program for password ;
#include <stdio.h>
#include <string.h>

int main(){

	char name[20]; // Array for Name ;
	char yesno; 
	char password[20];  // Array for Password ;
	char passwordagain[20]; // Array for 2nd Password ; 
	int length=0;  // Legnth of Password  string ;
	int count=0;
	int againcount=0; // This is for taking Password 2nd time from user for conformation .
	
	printf("\nEnter Your Name : ");
	scanf("%s", &name);

	printf("\n\nEnter Your Password : ");
	scanf("%s", &password);	
	
do{
	
	length=0; // length of String ;
	 
	againcount=0;
	
	yesno = 'y'; // By default We Give it Yes ;
	
	for(int i = 0; password[i] != '\0' ; i++) // " \0 is Garbage Value ".When any Index is Empty so the Loop will be ended .
    { 

				length++;
	}
	
	if(length >= 8) // Length of Password Must be Equal or Greater Then 8 Letters ;
    {
	    
		for(int i = 0 ; i < length ; i++)
        {

			if(password[i] == '%' || password[i] == '!' || password[i] == '*' || password[i] == '^' || password[i] == '&')
            {
				count++;
			}
		}
			if(count != 0) // if Count != Equal to 0 Its mean that its contain Any Special Integar ;
            {
				printf("\nEnter Your Password Again For The Secret Message : ");
				scanf("%s",passwordagain);
			
			for(int i = 0 ; i < length ; i++)
			{
				if(passwordagain[i]==password[i])
                {
					againcount++;
				}
				else
				{
			    	printf("\nPassword Not Match");
					yesno='n';
					break;
				}
	        }
				
				if(againcount == length )
                {
					printf("\nOpen Your Door ! it's FBI.");
					yesno='y';
				}
			}
			else
            {
				printf("Password Must Contain Atleast 1 special Character e.g = ! , % , ^ , & , * ");
				yesno = 'n' ;
			}
		
	}
	else{
	    
		printf("\nYour Password Must Greater or Equal to 8 Letters");
		
		printf("\nPlease Enter Your Password Again : ");
		scanf("%s", &password);
		
		yesno = 'n' ;
	}

} while(yesno=='n');
	
	return 0;
}