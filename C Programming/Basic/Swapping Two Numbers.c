//Author: Uzair Ahmad

#include<stdio.h>
int main(){
		
	int x,y;		
	int basket ;  // temporary variable to hold the value during swapping
	
	printf("Enter X : ");
	scanf("%d", &x);
	
	printf("Enter Y : ");
	scanf("%d", &y);
	
	basket = x;    // value of x is stored in basket
	x = y ;        // value of y is assigned to x
	y = basket ;   // value of basket (which holds the value of x) is assigned to y
	
	printf("After swaping X is : %d \n", x);
	printf("After Swaping Y is : %d \n", y);

	return 0;
}
