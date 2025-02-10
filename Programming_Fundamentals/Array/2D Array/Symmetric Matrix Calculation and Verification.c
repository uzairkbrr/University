#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>


bool symmetrix_Or_not(int row,int col,int a[row][col]);
int main() {
 
    int size = 4 ; 
    
    int a[size][size] , b[size][size];
    int resultantMatrix[size][size];
    // two arrays of same dimesions ;
    
    
    // getting random number for 1st Array by using rand() function;
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            a[i][j] = rand()%10+1 ; // rand()%10 give us random value form 0-9 because every largest value from 10 is actually divided by 10 and the remainder is its answer 
        }
    }
    
    // Getting Random Number for 2nd Array by using rand() function
     for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            b[i][j] = rand()%10+1 ; // rand()%10 give us random value form 0-9 because every largest value from 10 is actually divided by 10 and the remainder is its answer
        }
    }
    
    // printing values of 1st Array ;
    printf("1st Array : \n");
    
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {                
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }
    
    // printing values of 2nd Array ;
    printf("\n\n2nd Array : \n");
    
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            printf("%02d ", b[i][j]);
        }
        printf("\n");
    }
    
    
    // Replacing Diagonals of 2nd Array with diagonals of 1st Array 
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            if(i == j) // if both index are same then it means that both ara diagonal of matrix ; 
                b[i][j] = a[i][j] ; // now i replace diagonals of 2nd matrix with diagonal with 1st matrix ;
	
        }                          
    }
    
    // Here now i print the updated 2nd array , mean 2nd array with the diagonal's of 1st array ; 
    printf("\n\nSecond Array After Updating : \n");
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            printf("%02d ", b[i][j]);
        }
        printf("\n");
    }
     
     
    // When Row == 1 ;
    // Then row is same and column is changing 
    resultantMatrix[0][0] = (b[1][0] + b[0][1] + b[1][1] + b[0][3] + b[1][3] + b[3][0] + b[3][1]) / b[0][0] ;
    resultantMatrix[0][1] = (b[0][0] + b[0][2] + b[1][0] + b[1][2] + b[1][1] + b[3][0] + b[3][1] + b[3][2] ) / b[0][1] ;
    resultantMatrix[0][2] = (b[0][1] + b[0][3] + b[1][1] + b[1][2] + b[1][3] + b[3][1] + b[3][2] + b[3][3]) / b[0][2] ;
    resultantMatrix[0][3] = (b[0][2] + b[1][2] + b[1][3] + b[0][0] + b[1][0] + b[3][2] + b[3][3]) / b[0][3] ;
    
    // When Row == 2 ;
    // Then row is same and column is changing 
    resultantMatrix[1][0] = (b[0][0] + b[0][1] + b[1][1] + b[2][0] + b[2][1] + b[0][3] + b[1][3] + b[2][3]) / b[1][0] ;
    resultantMatrix[1][1] = (b[0][0] + b[0][1] + b[0][2] + b[1][0] + b[1][2] + b[2][0] + b[2][1] + b[2][2] ) /b[1][1] ;
    resultantMatrix[1][2] = (b[0][1] + b[0][2] + b[0][3] + b[1][1] + b[1][3] + b[2][1] + b[2][2] + b[2][3]) / b[1][2] ;
    resultantMatrix[1][3] = (b[0][2] + b[0][3] + b[1][2] + b[2][2] + b[2][3] + b[0][0] + b[1][0] + b[2][0]) / b[1][3] ;
    
    // when row == 3 ;
    // Then row is same and column is changing 
    resultantMatrix[2][0] = (b[1][0] + b[1][1] + b[2][1] + b[3][0] + b[3][1] + b[2][3] + b[3][3] + b[1][3]) / b[2][0] ;
    resultantMatrix[2][1] = (b[1][0] + b[1][1] + b[1][2] + b[2][0] + b[2][2] + b[3][0] + b[3][1] + b[3][2] ) /b[2][1] ;
    resultantMatrix[2][2] = (b[1][1] + b[1][2] + b[1][3] + b[2][1] + b[2][3] + b[3][1] + b[3][2] + b[3][3]) / b[2][2] ;
    resultantMatrix[2][3] = (b[1][2] + b[1][3] + b[2][2] + b[3][2] + b[3][3] + b[1][0] + b[2][0] + a[3][0]) / b[2][3] ;

    // when row = 4 
    // Then row is same and column is changing 
    resultantMatrix[3][0] = (b[2][0] + b[2][1] + b[3][1] + b[0][0] + b[0][1] + b[2][3] + b[3][3]) /b[3][0] ;
    resultantMatrix[3][1] = (b[2][0] + b[2][1] + b[2][2] + b[3][0] + b[3][2] + b[0][0] + b[0][1] + b[0][2]) / b[3][1] ;
    resultantMatrix[3][2] = (b[2][1] + b[2][2] + b[2][3] + b[3][1] + b[3][3] + b[0][1] + b[0][2] + b[0][3]) / b[3][2] ;
    resultantMatrix[3][3] = (b[2][2] + b[2][3] + b[3][2] + b[0][2] + b[0][3] + b[2][0] + b[3][0]) / b[3][3] ;
    
    
    printf("\n\nValues after Calculation :\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%02d ", resultantMatrix[i][j]);
        }
        printf("\n");
    }
    
    // Yesno is a bool variable which only store true or false if the function return true then it will store true and vice versa ;
    bool Yesno = symmetrix_Or_not(size,size,resultantMatrix) ;
    
    if(Yesno == true) // if function return true then display this  ;
        printf("\n\nResultant Matrix is Symmetrix.\nBecause Transpose of this Matrix is Equal to Real Matrix.");
    else  // else function return false then display this ;
        printf("\n\nResultant Matrix is Not Symmetrix.\nBecause Transpose of Matrix is Not Equal to Original Matrix");
    return 0;
}

// Function which check resultant matrix is symmetrix or Not ;
bool symmetrix_Or_not(int row, int col ,int a[row][col])
{
    int b[row][col] ; // 2nd Array which store transpose of Matrix which we pass to Function ;
    bool yesno = true ; // by default we store true in bool variable 
    
    // transposing of Matrix
    
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            b[j][i] = a[i][j] ;  // every row of array "a" is stored in every column of array "b" , means that col1 = row1 .... col4 = row4 ;
        }
    }
    
    // checking that transpose is equal to original matrix or not ;
    for(int i = 0 ; i< row ; i++)
    {
     for(int j = 0 ; j < col ; j++)
     {
         if(a[i][j] != b[i][j]) // if any number of original matrix found which is not equal to number of same index of transpose array then store false in bool (yesno) variable ;
            yesno = false ;
     }
    }
    
    // if any number of original matrix is not same with number of transpose matrix then it will return false (this is done in above loop)
    
    // but if all numbers are same then it return true because we store true on time of declaring ;
    return yesno ;
    
}
