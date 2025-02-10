//Author: Uzair Ahmad

#include<stdio.h>
#include<string.h>

void encrypt(char string[]);
void decrypt(char string[]);

int main()
{
	int size = 20;
	char string[size];
	
	
	printf("Enter a string : ");
	gets(string);
		
	encrypt(string);
			
	decrypt(string);
			
	return 0;
}


void encrypt(char string[])
{

    int length = strlen(string);
    
	for(int i = 0 ; i < length ; i++){
	    
		if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
		{
			if(string[i] >= 'x' || (string[i] >= 'X' && string[i] <= 'Z'))
				string[i] -= 23;
			else
				string[i] += 3;
		}
	}
	printf("Encrypted String :");
	puts(string) ;
}


void decrypt(char string[])
{
	int length = strlen(string);
	
	for(int i = 0 ; i <length ; i++){
	    
		if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
		{
			if(string[i] <= 'c' || (string[i] <= 'C' && string[i] >= 'A'))
				string[i] += 23;
			else
				string[i] -= 3;
		}
	}
	printf("Decrypted String : ");
	puts(string);
}

