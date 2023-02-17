#include<stdio.h>

void Even_OR_Odd(int x);

int main(){
	
	int number ;
	
	printf("Enter Number : ");
	scanf("%d", &number);
	
	Even_OR_Odd(number);
		
	
	return 0;
}

void Even_OR_Odd(int x){
	
	if(x % 2 == 0){
		printf("Even Number .");
	}
	else {
		printf("Odd Number .");
	}
	
}
