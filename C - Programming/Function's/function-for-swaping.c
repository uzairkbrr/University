#include<stdio.h>
int Swaping(int x , int y);

int main(){

	int number1 , number2 ;
	
	printf("Enter Number 1 : ");
	scanf("%d", &number1);
	 	
	printf("Enter Number 2 : ");
	scanf("%d", &number2);
	
	printf("Before Swaping :  N1 = %d, N2 = %d \n", number1 , number2);
	Swaping(number1 , number2);
	
	return 0;
	
}

int Swaping(int x , int y){
	
	int basket = x ;
	x = y ;
	y = basket ;
	
	printf("After swapping: N1 = %d, N2 = %d", x , y);
	
	return 0;
}
