#include<stdio.h>

int main(){
	
	int n , x = 0 , rev = 0 ;
	
	printf("Enter Number : ");
	scanf("%d", &n);
	
	int i = 1 ;
	
	while ( n != 0){
		
		x = n % 10 ;
		
		rev = rev * 10 + x; 
			
		n = n / 10 ;
		
		i++ ;
	}
	
		
		printf("%d", rev);
	
	
	return 0;
}