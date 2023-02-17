#include<stdio.h>

int alanpizza(); // Function Declaration ;

int main(){
	
	int answer = pizza();
	
	printf("Number of Slices is : %d", answer);
	return 0;
}

int pizza(){
	
	float pi = 3.14 ;
	float area = 14.125 ; 
	float diameter = 7 ;
	float radius = diameter / 2 ;
	
	float formula = pi * ( radius * radius ) ;
	
	int result = formula / area ;
	
	return result;
}
