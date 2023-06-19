//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	// Taking input from user for number of years
	int num ;
	
	printf("How Many years : ");
	scanf(" %d", &num);
	
	// Creating a 2D array to store the sales data of each quarter for each year 
	int year[num][4];
	int result[num]; // Creating an array to store the total revenue generated in each year
	
	// Taking input from user for the sales data of each quarter for each year 
	for(int i = 0 ; i < num ; i++)
	{
	    int sum = 0;
		  
	    printf("Year : %d\n",i+1);
	    
	    for(int j = 0 ; j < 4 ; j++)
	    {
	        printf("Enter Sale for Quarter : %d => ", j+1);
	        scanf(" %d", &year[i][j]);
	        
	        sum += year[i][j];
	        
	        printf("\n");
	    }
	    result[i] = sum ; // Storing the total revenue generated for each year in the array "result"
	
	}
	
	// Printing the total revenue generated in each year 
	for(int i = 0 ; i < num ; i++)
	{
	    printf("Year : %d  Revenue : %d\n", i+1 , result[i]);
	}   
	    
	// Finding the year and quarter with maximum revenue
	int max = year[0][0] ;
	
	int yearcount = 1 , quartercount = 1 ;
	for(int i = 0 ; i < num ; i++)
	{
		for(int j = 0 ; j < 4 ; j++)
		{
			if(max < year[i][j])
			{
				max = year[i][j];
				quartercount = j+1 ;
				yearcount = i+1 ;
			}			
		}		
	}
	
	// Printing the year and quarter with maximum revenue 
	printf("\nMax Revenue : %d in Year %d Quarter %d", max , yearcount , quartercount);
	
	return 0 ;

	
}
