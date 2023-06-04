//Author: Uzair Ahmad

#include<stdio.h>

int square(int x); // Declaration of the square function ;

int main(){
	
	int number ; 
		
	printf("Enter Number : ");
	scanf("%d", &number);
	
	int Square = square(number); // Calling the square function and assigning its value to the variable for printing ;
	
	printf("Square of %d is %d", number , Square);
		
	return 0;	
		
			
}

int square(int x){
	
return x * x ; // Calculate the square by multiplying the number by itself ;

}
