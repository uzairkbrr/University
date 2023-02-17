#include<stdio.h>

int main(){
	
    char input ;
    
    printf("Enter Character : ");
    scanf("%c", &input);

    if( input >='a' && input <='z' || input >= 'A' && input <= 'Z' ){
    	
    switch(input){
    	
        case 'a' :
        case 'A' :
        	
	    case 'e' :
	    case 'E' :
	    	
        case 'i' :
        case 'I' :
        	
        case 'o' :
        case 'O' :
        	
        case 'u' :
        case 'U' :
        	
        printf("\n%c is Vowel.\n",input);
        
        break;
        
        default :
        	
        printf("\n%c is Consonant\n", input);
    }
    
	} 
	
	else
	
	printf("\nEnter Valid Input. \n");
    
}