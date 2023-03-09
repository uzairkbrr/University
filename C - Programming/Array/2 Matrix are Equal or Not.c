#include <stdio.h>
#include <stdbool.h>

int main() {

    int row, col ;
    
    printf("Enter Number of Row for Matrix : ");
    scanf("%d", &row);
    printf("Enter Number of Columns for Matrix : ");
    scanf("%d", &col);
    
    int a[row][col] ;
    int b[row][col] ;
    bool yesno = true ;
    
    printf("Enter Value for 1st Array \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    
    printf("Enter Value for 2nd Array \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d ", &b[i][j]);
        }
    }
    
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            b[j][i] = a[i][j] ;
        }
    }
    
    for(int i = 0 ; i< row ; i++)
    {
      for(int j = 0 ; j < col ; j++)
      {
          if(a[i][j] != b[j][i])
            yesno = false ;
      }
    }
    
    
 if(yesno)  
    printf("Both Matrix are Equal \n");
else 
    printf("Both Matrix are Not Equal \n");
 

    return 0;
}