// Author: Uzair Ahmad

#include <stdio.h>

// pass by reference:
//					pass by reference means that passing the actuall value 
//					so for passing actual value we actually passed the address of the variable;
//					& operator is used for address;
//					so focus on the parameters of the function we receive address through it;

void function(int &a, int &b){
	
	// printing the values of a and b 
	// value of a=10, b=20; this is passed from main function;
	printf("Value of A in function : %d\n", a);
	printf("Value of B in function : %d\n", b);
	
	// now we changed the value of the variables;
	// a = 10 but now  a = 5;
	// b = 20 but now  b = 8;
	a = 5 ;
	b = 8 ;

}

int main(){
	
	int a = 10 , b = 20;

	// We call the "function" by passing the variables a and b as arguments.
	// These variables are passed by reference, so the function can modify their values directly.
	// We first print the values of a and b before the function call, then print their values again after the function call.
	
	printf("Printing Values before function call: \n\n");
	function(a,b);
	
	printf("\n\nPrinting Values after function call: \n\n");
	printf("Value of 'A' after funciton : %d\n",a);
	printf("Value of 'B' after funciton : %d\n",b);
	
	return 0;

}
