//Write a program that stores 15 numbers in array by taking input from user
//and displays the no of unique elements in array along with the number.

#include <stdio.h>
int main()
{
    int arr1[15] , counter = 0 ;

    
    // Getting Value for User ;
	  
    for(int i = 0 ; i < 15 ; i++)
    {
	    printf("Index No - %d : ",i);
	    scanf("%d", &arr1[i]);
	  }
	  
    
    
    // Using Nested Loop Because Every Value have to check with all Other Values ;
    int howmany = 0 ;
       
    for(int i = 0; i < 15; i++)
    {
       counter=0;
        
        for(int j = 0 ; j < 15; j++)
        {
          
        	if (i != j) // its means that we can't check the same index ;
        	{
		    	if(arr1[i] == arr1[j]) // if Numbers are same then add 1 to Counter ;
            	{
                	counter++;  // Increment the counter when the seaarch value is duplicate.
            	}
               
        	}
        }
        
       if(counter == 0) // so above We add 1 to Counter if Values is Same , So Here We Check Weather " Counter == 0 "  which mean No values is same .
        {
          printf("%d is Unique. \n",arr1[i]);
          howmany++ ;
        }
    }
    
    printf("There are %d Unqiue Number's in given Array .", howmany);

	return 0;
}
