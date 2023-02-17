//Write program that takes the marks of 10 students from user. The program
//then displays the max marks, min marks, average marks .

#include <stdio.h>

int main(){
	
	int size;
	printf("How Many Students : ");
	scanf(" %d" , &size );
	int marks[size];

	printf("Enter Marks of Students => \n");
	
	// getting input from user ;
	
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d", &marks[i]);
	}
	
	// Printing Given Marks ;
	
	printf("You Entered The Following Marks => \n");
	
	for ( int i = 0 ; i < size ; i++)
	{
		printf("%d \n", marks[i]);
	}
	int max = marks[0]; // let assume 1st Value is Maximum Value ; 
	
	for(int i = 0 ; i < size ; i++)
	{
		if(max < marks[i])
		{
			max = marks[i] ;
		}
	}
	
	printf("\nMaximum Marks : %d", max); // Printing Maximum Value ;
		
	int min = marks[0] ; // Let Assume 1st Value is Minimh=um Value ;
	
	for(int i = 0 ; i < 10 ; i++ )
	{
		if( min > marks[i])
		{
			min = marks[i];
		}
	}
	
	printf("\nMinimum Marks : %d", min); // Printing Minimun Value ;
	
	// Now to Find Average ;
	
	int sum = 0 ;
	
	for(int i = 0 ; i < size ; i++)
	{
		sum += marks[i];
	}
	
	float average = float(sum) / 10 ;
	
	printf("\nAverage of Your Entered Marks is : %.2f", average);
	return 0 ;
}