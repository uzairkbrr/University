#include<stdio.h>
int main(){
	
	int a,b ;
	
	printf("Enter No for Finding its Square root : ");
	scanf("%d", &a);
	
	// "sqrt" is a function in C langauge with the help of which we can find square root of any number ;
	
	b = sqrt(a);
	
	printf("Square root of %d is %d",a , b);
	
	return 0;
}
