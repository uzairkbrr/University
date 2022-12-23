#include <stdio.h>

int getmaximum(int arr[] , int n);

int main(){

	int n = 3;
	int arr[n];

	printf("Enter Value's for Array \n");

	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d" , &arr[i] );
	}

	int maximum = getmaximum(arr, n);

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
