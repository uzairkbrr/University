#include <stdio.h>

int main(){
	
	int size , sum1 , sum2 ;
	
	printf("Enter the Dimension of Square Matrix : ");
	scanf(" %d", &size);
	
	int arr[size][size];
	
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        printf("Enter Value for Index %d%d : ", i , j);
	        scanf(" %d",&arr[i][j]);
	        printf("\n");
	    }
	}
	
	printf("\nOrigional Matrix : \n");
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        printf(" %d",arr[i][j]);
	    }
	    printf("\n");
	}
	
	for(int i = 0 ; i < size ; i++)
	{
	    for(int j = 0 ; j < size ; j++)
	    {
	        if(i==j)
	        {
	            sum1 += arr[i][j] ;
	        }
	        if((i+j) == (size-1))
	            sum2 += arr[i][j] ;
	    }
	}
	
	printf("\nSum of Left Diagonal : %d\n", sum1 );
	printf("Sum of Right Diagonal : %d\n", sum2 );
	
    
    
	
	return 0 ;
}
