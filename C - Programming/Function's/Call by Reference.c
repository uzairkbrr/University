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
	
	// calling the function
	// sending ( a , b ) as arguments 
	// focus on the definition of fucntion and try to understand it what's going on.
	// 1) diplaying the passed values;
	// 2) changed the vales inside function;
	
	printf("Printing Values before function call: \n\n");
	function(a,b);
	
	// Now again printing the values ;
	// check it in result;
	// now a=5 and b=8;
	// because we send reference ( reference means address ) of variable to function ;
	// function print values which is stored on that address
	// then we changed values;
	// so the actuall values of a and b is now changed from (a=10, b=20) to (a=5, b=8);
	
	printf("\n\nPrinting Values after function call: \n\n");
	printf("Value of 'A' after funciton : %d\n",a);
	printf("Value of 'B' after funciton : %d\n",b);
	
	return 0;
}
