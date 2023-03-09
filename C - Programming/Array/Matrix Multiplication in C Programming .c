#include <stdio.h>
int main()
{

	int row1 , row2 , col1 ,col2 ;

	
	printf("Enter Number of Rows for 1st Matrix\n");
	scanf("%d", &row1);
	printf("Enter Number of Columns for 1st Matrix\n");
	scanf("%d", &col1);
	
	printf("Enter Number of Rows for 2nd Matrix \n");
	scanf("%d", &row2);
	printf("Enter Number of Columns for 2nd Matrix\n");
	scanf("%d", &col2);
	
	int a[row1][col1]; 
	int b[row2][col2];
	int c[row1][col2]; 
	
	// Taking Input from user for 1st Array ;

	printf("Enter Values of 1st Array \n");
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			scanf(" %d", &a[i][j]);
		} 
	}
	

	// Taking Input from user for 2nd Array ;

	printf("Enter Values for 2nd Array \n");
	
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			scanf(" %d", &b[i][j]);
		} 
	}
	
	// Printing Values of 1st Array ;
	
	printf("Values of 1st Array \n");
	for(int i=0; i<row1; i++){
		for(int j=0; j<col1; j++){
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	
	// Printing Values of 2nd Array ;
	printf("Values of 2st Array \n");
	for(int i=0; i<row2; i++){
		for(int j=0; j<col2; j++){
			printf(" %d", b[i][j]);
		}
		printf("\n");
	}
	
	
	// Here Multiplicaton of Above 2 Array's ;

	if(col1 == row2) // Condition for Multiplication of 2 Matrix ;
	{
	
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col2; j++)
		{
			int sum = 0;
			for(int k=0; k<col1; k++)
			{
				sum = sum +  a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		} 
	}
	
	// Printing The Resultant Matrix ;
	
	printf("Resultant Matrix \t\t");
	printf("\n");
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col2; j++)
		{
			printf(" %02d", c[i][j]);
		}
		printf("\n");
	}
	
	}
	
	else {
		printf("\n\nFor Multiplication of 2 Matrix Columns of 1st Matrix equal to Rows of 2nd Matrix \n\n");
	}
	
return 0;
}
