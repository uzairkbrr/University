
#include <stdio.h>

//DECLARE FUNCTIONS HERE

int openLocks ( int num_of_lockers , int num_of_students){


   
    int Open = 0, Close = 0 , Check ;
   	
	int lockers = 1; 
	
	while (lockers <= num_of_lockers )
	{
		 Check=0;
		
		for ( int students = 1; students <= num_of_students; students++)
		{
				if ( lockers % students == 0)
				{
					Check++;
				}
		}
					
			if ( Check % 2 != 0 ){
				Open++;
				
			}else 
			{
				Close++ ;
			}
			
		lockers++ ;
	}		
		
	
	if( Close + Open == num_of_lockers )
	// Now to Conform , if CLose Lockers & Open Lockers is Equal to Number of Lockers then its mean answer is okay to Go ;
		return Open ;
		
	// Return Open Lockers because We Just wanted to Check Open Lockers ; 	
}



int mostTouchableLocker(int num_of_lockers , int num_of_students ){


   
    int MostTouchLocker = 0, Extra = 0 , Check ; 
	
	// MostTouchLocker Variable is For Storing Number of Locker Which is Touched Most ;
	// Check Variable is for Just Checking if Locker is Touched ;
	// Extra Variable is for Storing Value of Touched Locker ;
   	
	int locker = 1; 
	
	while (locker <= num_of_lockers ){
		 Check=0;
		
		for ( int student = 1; student <= num_of_students; student++)
		{
			if ( locker % student == 0)	{
				Check++;
			}
							
			if(Extra < Check)
			{
				Extra=Check;
				MostTouchLocker=locker;
			}
			
			if(Extra==Check){
				Extra=Check;
				MostTouchLocker=locker;
			}
		}

		locker++ ;
	}		
		
	
		return MostTouchLocker ;	
}


//NOTHING BELOW THIS POINT
void test1(int arr[][3] , int size)
{
   printf("\n\nTask 1 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = openLocks(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
            
         printf( "Test Failed\n") ;
       
         
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
    }
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][3] , int size)
{
    
   printf("\n\nTask 2 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = mostTouchableLocker(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
                
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
        
    }   
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
      
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

int main()
{
    int arr1[10][3] = {{10,10,3},
                      {100,100,10},
                      {100,72,34},
                      {70,100,8},
                      {10000,1000,5228},
                      {0,0,0},
                      {1,0,0},
                      {10000,10000,100},
                      {10000,2000,5187},
                      {17000,2154,8989}};
    int arr2[10][3] = {{10,10,10},
                      {20,10,20},
                      {72,100,72},
                      {100,70,60},
                      {150,40,120},
                      {15,7,12},
                      {1500,450,1260},
                      {100,100,96},
                      {17000,2154,15120},
                      {10000,10000,9240}};
    test1(arr1,10);
    test2(arr2,10);

    return 0;
}