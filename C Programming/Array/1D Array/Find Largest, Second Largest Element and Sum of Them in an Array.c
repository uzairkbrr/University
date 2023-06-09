//Author: Uzair Ahmad

#include <stdio.h>

int main() {

 	int size ;
	
	printf("Enter Size for Array => ");
	scanf("%d", &size);
	
	int array[size] ;
	
	printf("Enter Values for Array :- \n");
	
	// taking user input to populate the array
	for(int i=0;i<size;i++)
	{
	    printf("index no [%d] = ", i);
	    scanf("%d", &array[i]);
	}
	
	int largest = array[0];
	int second_largest = largest;
	
	// finding largest and second largest elements in the array
	for(int i=0;i<size;i++)
	{
	    if(largest < array[i])
	    {
	         second_largest = largest;
	         largest = array[i];
	    }
	    else if(second_largest < array[i])
	    {
	        second_largest = array[i];
	    }
	}
	
	// displaying the largest, second largest and their sum
	printf("\nlargest Element in Array => %d\n",largest);
	printf("\nSecond largest Element in Array => %d\n",second_largest);
	printf("\nSum of Largest and Second Largest element is => %d",largest+second_largest);
	
	return 0;


}