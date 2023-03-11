#include <stdio.h>

int main() {
   
   int x ; 
   int row = 4, col = 10 ; //You can even enter Rows & Colums of  your own wish  
   char a[row][col] ;
   

    // Assigning that no seat is Reserved 
 ;
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
    printf("4. Quit Program.\n");
    
    scanf("%d", &x);
    
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
          char yn ;
          int r , c ;
        do{
            
        printf("Enter Row in which you Want to occupy a Seat (1 - %d) : ",row);
        scanf("%d", &r);
        
        if(r > 0 && r <= row)
        {
        printf("Enter Seat Number (1 - %d) : ", col);
        scanf("%d", &c);
        }
        
        if(c > 0 && c <= col)
        {
            a[r-1][c-1] = '*' ; // r-1,c-1 because we have to reserved seat number in r rows & c columns & compiler run according to index so we subtract -1 beacuse index start from 0;
        }
        
        else 
            printf("InValid Row/Seat Number\n");
            printf("Row is from 1 to %d\n",row);
            printf("Seats is from 1 to %d\n", col);
            
      
        printf("\nDo You Want to Occupy Another Seat for Your friend ? Y/N ");
        scanf(" %c", &yn);
        
        }while (yn == 'y' || yn == 'Y');
        
    }
    else if(x == 3)
    {
        int count = 0 ;
        
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

   }while(x != 4); // if user enter 4 then program will end ''
   
   printf("Thank for Visiting Our Cinema Website .\n");
   printf("See You Next Time .");
   
  

    return 0;
}