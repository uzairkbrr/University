//Author: Uzair Ahmad

#include<stdio.h>

void Swapping(int x, int y); // Declaration of the Swapping function ;

int main(){

	int number1, number2;
	
	printf("Enter Number 1: ");
	scanf("%d", &number1);
	 	
	printf("Enter Number 2: ");
	scanf("%d", &number2);
	
	printf("Before Swapping: N1 = %d, N2 = %d \n", number1 , number2);
	Swapping(number1, number2); // Calling the Swapping function ;
	
	return 0;	

	
}

void Swapping(int x , int y){
	
	int basket = x; // Temporary variable to hold the value of x ;
	x = y; // Assigning the value of y to x ;
	y = basket; // Assigning the value of the temporary variable to y ;
	
	printf("After swapping: N1 = %d, N2 = %d", x , y);

}
