#include <stdio.h>

int main(){
	
	int factorial ;
	int product = 1 ;
	
	printf("Enter Factorial Which You want to Find : ");
	scanf("%d", &factorial);
	
	int i = factorial ;
	
	while( i > 0 ){
		
		product = product * i ;
		
		i-- ;
	}
	
	printf("Factorial of %d is %d", factorial , product);
	
	return 0 ;
}