//Author: Uzair Ahmad

#include <stdio.h>
int main()
{
	
	int size;
	
	printf("Enter Size for Array => ");
	scanf("%d", &size);
	
	int arr1[size], counter = 0;
	
	// Getting Values from User
	  
	for(int i = 0 ; i < size ; i++)
	{
	    printf("Index No - %d : ",i);
	    scanf("%d", &arr1[i]);
	  }
	  
	// Using Nested Loop to Compare Values
	int uniqueCount = 0;
	   
	for(int i = 0; i < size; i++)
	{
	   counter = 0;
	    
	    for(int j = 0 ; j < size; j++)
	    {
	    	// Check if the numbers are same and not at the same index
	    	if (i != j && arr1[i] == arr1[j])
	        	counter++;  // Increment the counter when the search value is a duplicate.
	    }
	    
	    // Check if the current number is unique
	    if(counter == 0)
	    {
	      printf("%d is Unique. \n", arr1[i]);
	      uniqueCount++;
	    }
	}
	
	printf("There are %d Unique Numbers in the given Array.", uniqueCount);
	
	return 0;

}
