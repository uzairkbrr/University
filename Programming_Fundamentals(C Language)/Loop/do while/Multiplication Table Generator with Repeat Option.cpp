//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	int num;
	char again;
	
	do{
    	// Getting input number from user
    	printf("Enter Number :");
    	scanf("%d",&num);
    	
    	// Loop to calculate multiplication table of entered number
    	for(int i=1; i<=10; i++)
    	{	
    		printf("%d * %d = %d \n", num , i , num*i);
    	}
        
        printf("Do You Want To Print Table Again ( Y / N ) => ");
        scanf(" %c", &again);
        
	}while(again == 'y' || again == 'Y');
	
	return 0;

}