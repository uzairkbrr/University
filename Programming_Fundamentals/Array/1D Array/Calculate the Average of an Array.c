//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int n ;
	float average , sum = 0  ;
	int array[n] ;
	
	// Getting size of the Array
	printf("Enter Nth Number : ");
	scanf("%d", &n);
	
	// Assigning values to the array
	for(int i = 0 ; i < n ; i++)
	{
		scanf(" %d", &array[i]);
		
		// Finding the sum of all the elements in the array
		sum += array[i];	
	}  
	
	// Calculating the average of the elements in the array
	average = sum / n ;
	
	printf("Average : %.2f", average);
	
	return 0 ;

}