//Author: Uzair Ahmad

#include<stdio.h>

void EvenOROdd(int x); // Declaration of the Even_OR_Odd function ;

int main(){
	
	int number ;
	
	printf("Enter Number : ");
	scanf("%d", &number);
	
	EvenOROdd(number);
		
	
	return 0;
}

void EvenOROdd(int x){
	
	if(x % 2 == 0){
		printf("Even Number .");
	}
	else {
		printf("Odd Number .");
	}
	
}
