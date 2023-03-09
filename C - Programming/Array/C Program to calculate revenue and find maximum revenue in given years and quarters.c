#include <stdio.h>

int main(){
	
	int num ;
    
    printf("How Many years : ");
    scanf(" %d", &num);
    
    int year[num][4];
    int result[num];
    
    for(int i = 0 ; i < num ; i++)
    {
     
	 	int sum = 0;
		  
        printf("Year : %d\n",i+1);
        
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("Enter Sale for Quarter : %d\n", j+1);
            scanf(" %d", &year[i][j]);
            
            sum += year[i][j];
            
            printf("\n");
        }
        result[i] = sum ;

    }
    
    // Printing Values of Revenue Generated in Every Year ;
    
    for(int i = 0 ; i < num ; i++)
    {
        printf("Year : %d  Revenue : %d\n", i+1 , result[i]);
    }   
        
//	Now to Find Maximam Revenue in Which Year & Quarter ;

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
	
	printf("\nMax Revenue : %d in Year %d Quarter %d", max , yearcount , quartercount);
	
	return 0 ;
	
}
