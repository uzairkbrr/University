#include<stdio.h>

float square(int x); // Declaration of Function ;

int main(){
	
	int number ; 
	
	printf("Enter Number : ");
	scanf("%d", &number);
	
	int Square = square(number); // Calling Function & Assign it value to Variable for Priting ;
	
	printf("Square of %d is %d", number , Square);

	return 0;	
	
}

float square(int x){
	
	return x * x ; // Square is n*n so ;
}
