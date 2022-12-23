#include <stdio.h>

int main(){
	
	int n ;
	float average , sum = 0  ;
	int array[n] ;
	
	
	printf("Enter Nth Number : ");
	scanf("%d", &n);
	
	// Assining Values to Array ;
	
	for(int i = 0 ; i < n ; i++)
	{
		scanf(" %d", &array[i]);
		
		sum += array[i];	
	}  
	
	average = sum / n ;
	
	printf("Average : %.2f", average);
	
	return 0 ;
}