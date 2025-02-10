//Author: Uzair Ahmad

#include <stdio.h>

int main() {
   
    int cor1 , cor2 ;
    
	printf("Enter X : ");
	scanf("%d", &cor1);
	printf("Enter Y :");
	scanf("%d", &cor2);
	
	// check if coordinate lies in 1st quadrant
	if ( cor1 > 0 && cor2 > 0)
	{
	    printf("Cordinate's Lies In 1st Quadent.");
	}
	// check if coordinate lies in 2nd quadrant
	else if ( cor1 < 0 && cor2 > 0)
	{
	    printf("Cordinate's Lies In 2nd Quadent.");
	}
	// check if coordinate lies in 3rd quadrant
	else if (cor1 < 0 && cor2 < 0)
	{
	    printf("Cordinate's Lies In 3rd Quadent.");
	}
	// check if coordinate lies in 4th quadrant
	else if (cor1 > 0 && cor2 < 0)
	{
	    printf("Cordinate's Lies in 4th Quadent.");
	}
	// check if coordinate lies on origin
	else 
	{
	    printf("Cordinate's Lies on Origin.");
	}
	
	return 0;

}