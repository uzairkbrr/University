//Author: Uzair Ahmad

#include <stdio.h>

int getmaximum(int arr[] , int n);
int main(){

	int n;
	
	printf("Enter Size of Array => ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter Values for Array: \n");
	
	for(int i = 0 ; i < n ; i++)
	{
	    scanf("%d" , &arr[i] );
	}
	
	// Call the getmaximum function to find maximum element
	int maximum = getmaximum(arr, n);
	
	// Print the maximum element
	printf("Maximum Element in the Array: %d", maximum);
	
	return 0 ;

}

int getmaximum(int arr[] , int n){

	int max = arr[0];
	
	for(int i = 0 ; i < n ; i++)
	{
	
	    if( max < arr[i])
	        max = arr[i] ;
	
	}
	
	return max ;

} 
