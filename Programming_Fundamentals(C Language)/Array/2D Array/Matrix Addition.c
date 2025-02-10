//Author: Uzair Ahmad

#include <stdio.h>

int rows, cols;

// Function to add two matrices
void sum(int matrix1[rows][cols], int matrix2[rows][cols]);


int main() {

	printf("Enter Number of Rows: \n");
	scanf("%d", &rows);
	
	printf("Enter Number of Columns: \n");
	scanf("%d", &cols);
	
	int matrix1[rows][cols];
	int matrix2[rows][cols];
	
	// Taking Values for 1st matrix from user ;
	printf("Enter Values for 1st Matrix\n");
	
	for (int i = 0; i < rows; i++) 
	{
	    for (int j = 0; j < cols; j++) 
		{
	        scanf(" %d", &matrix1[i][j]);
	    }
	}
	
	// Taking Values for 2nd matrix from user ;
	printf("Enter Values for 2nd Matrix\n");
	
	for (int i = 0; i < rows; i++) 
	{
	    for (int j = 0; j < cols; j++) 
		{
	        scanf(" %d", &matrix2[i][j]);
	    }
	}
	
	// Calling function to add matrices
	sum(matrix1, matrix2);
	
	return 0;

}

void sum(int matrix1[rows][rows] , int matrix2[rows][rows]){
	
	int matrix3[rows][cols];
	
	printf("Values of Resultant Matrix \n");
	
	// Adding elements of both matrices
	for (int i = 0; i < rows; i++) 
	{
	    for (int j = 0; j < cols; j++) 
		{
	        matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
	        printf("%d ", matrix3[i][j]);
	    }
	    printf("\n");
	}

}
