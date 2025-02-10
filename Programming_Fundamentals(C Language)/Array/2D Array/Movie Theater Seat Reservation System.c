//Author: Uzair Ahmad

#include <stdio.h>
#include <stdbool.h>

int main() {
   
   int x ; 
   int row , col ; // variables to store the number of rows and columns of seats
   
   // Ask the user to input the number of rows and columns of seats
   printf("Enter Row's => ");
   scanf("%d", &row);
   printf("Enter Seat's numbers in one Row => ");
   scanf("%d", &col);
    
   char a[row][col] ; // 2D array to store the seating chart

   // Assigning that no seat is Reserved 
   // Initialize the 2D array with '-' to indicate that no seat is reserved
   for(int i  = 0 ; i < row ; i++)
   {
       for(int j = 0 ; j < col ; j++)
       {
           a[i][j] = '-' ;
       }
   }
    
   do{
    
	    printf("\nChoose from Menu :\n");
	    printf("1. Seating Chart.\n");
	    printf("2. Purchase a Seat.\n");
	    printf("3. See How many Seats Have Sold.\n");
	    printf("4. Exit.\n");
    
    	printf("Your Option => ");
    	scanf("%d", &x);
    	printf("\n");
    
    if(x == 1)
    {
        // if user enter 1 then the chart of seat will be display on screen 
         for(int i  = 0 ; i < row ; i++)
         {
            for(int j = 0 ; j < col ; j++)
            {
                printf("%c ", a[i][j]);
            }
          printf("\n");
         }
    }
    else if(x == 2)
    {
          char yn ; // variable to store the user's response
          int r , c ; // variables to store the row and column of the seat to be reserved
          
        do{
            
        printf("\nEnter Row in which you Want to occupy a Seat (1 - %d) : ",row);
        scanf("%d", &r);
        
        if(r > 0 && r <= row)
        {
	        printf("\nEnter Seat Number (1 - %d) : ", col);
	        scanf("%d", &c);
	        
	        if(c > 0 && c <= col)
	        {
	        	if(a[r-1][c-1] != '*') // check if the seat is already reserved
	        	{
	            	a[r-1][c-1] = '*' ; // reserve the seat by changing its value to '*'
	             
			        printf("\nDo You Want to Occupy Another Seat for Your friend ? Y/N ");
			        scanf(" %c", &yn);
				}
				else
				{
					printf("\n Seat Already Booked !\n");
					break;
				}
				
	        }
	        else
	        {
	        	printf("Invalid Seat!");
	        	printf("Seats is from 1 to %d\n", col);
				break; 
			}
    	}
        else 
        {
   			printf("InValid Row\n");
            printf("Row is from 1 to %d\n",row);
                	
		}
        
        }while (yn == 'y' || yn == 'Y'); // ask the user if they want to reserve another seat
    }
    else if(x == 3)
    {
        int count = 0 ; // variable to store the number of reserved seats
        
        for(int i = 0 ; i<row ; i++)
        {
            for(int j=0; j<col ; j++)
            {

	            if(a[i][j] == '*') // * means reserved seat so we take count variable and if any seat == * then we add +1 to count ;
	            count++ ;
            }
        }
        
        printf("There are %d reserved Seats.\n\n", count);
    }

   }while(x != 4); // if user enter 4 then program will end ;
   
   printf("Thank for Visiting Our Cinema Website .\n");
   printf("See You Next Time .");
   
  

    return 0;
}