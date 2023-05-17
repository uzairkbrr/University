//Author: Uzair Ahmad

#include<stdio.h>
int main (){
    
    int marks ;
	printf("Enter Mark's : ");
	scanf("%d", &marks);
	
	// checking marks range and printing the corresponding grade
	if ( marks < 50)
	{
	    printf("Fail.");
	}
	else if (marks >= 50 && marks < 60)
	{
	    printf("D Grade.");
	}
	else if (marks >= 60 && marks < 70)
	{
	    printf("C Grade.");
	}
	else if (marks >= 70 && marks < 80)
	{
	    printf("B Grade.");
	}
	else if (marks >= 80 && marks < 90)
	{
	    printf("A Grade.");
	}
	else 
	{
	    printf("A+ Grade.");
	}
	    
	return 0;

}
