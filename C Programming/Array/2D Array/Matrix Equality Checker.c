//Author: Uzair Ahmad

#include <stdio.h>
#include <stdbool.h>

int main() {

	// variables for matrix size and boolean for comparison result
	int row, col;
	bool check = true;
	
	// getting matrix size from user
	printf("Enter Number of Rows for Matrix: ");
	scanf("%d", &row);
	printf("Enter Number of Columns for Matrix: ");
	scanf("%d", &col);
	
	// initializing two matrices a and b
	int a[row][col];
	int b[row][col];
	
	// getting input for matrix a from user
	printf("Enter Values for 1st Array:\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d ", &a[i][j]);
		}
	}
	
	// getting input for matrix b from user
	printf("Enter Values for 2nd Array:\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d ", &b[i][j]);
		}
	}
	
	// transposing matrix a into matrix b
	for(int i = 0 ; i < row ; i++) {
		for(int j = 0 ; j < col ; j++) {
			b[j][i] = a[i][j] ;
		}
	}
	
	// comparing elements of matrix a and b
	for(int i = 0 ; i < row ; i++) {
		for(int j = 0 ; j < col ; j++) {
			if(a[i][j] != b[j][i])
				check = false ;
		}
	}
	
	// printing result of comparison
	if(check)
		printf("Both Matrix are Equal\n");
	else
		printf("Both Matrix are Not Equal\n");
	
	return 0;

}