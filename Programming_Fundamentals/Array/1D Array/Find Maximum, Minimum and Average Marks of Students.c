//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int size;
	
	printf("How Many Subjects : ");
	scanf(" %d" , &size );
	
	int marks[size];
	
	printf("\nEnter Marks of Student : \n");
	
	// getting input from user ;
	for(int i = 0 ; i < size ; i++)
	{
		printf("Subject No %d => ", i+1);
		scanf("%d", &marks[i]);
	}
	
	// Printing Given Marks ;
	
	printf("\nYou Entered The Following Marks => \n");
	
	for ( int i = 0 ; i < size ; i++)
	{
		printf(" %d", marks[i]);
	}
	
	int max = marks[0]; // let assume 1st Value is Maximum Value ; 
	int min = marks[0] ; // Let Assume 1st Value is Minimum Value ;
	
	//finding minimum and maximum 
	for(int i = 0 ; i < size ; i++)
	{
		if(max < marks[i])
		{
			max = marks[i] ;
		}
		
		if(min > marks[i])
		{
			min = marks[i];
		}
	}
	
	printf("\nMaximum Marks : %d\n", max); // Printing Maximum Value ;	
	printf("\nMinimum Marks : %d\n", min); // Printing Minimun Value ;
	
	// Now to Find Average ;
	
	float sum = 0 ;
	
	for(int i = 0 ; i < size ; i++)
	{
		sum += marks[i];
	}
	
	float average = sum / size ;
	
	printf("\nAverage of Your Entered Marks is : %.2f", average);
	
	return 0 ;

}