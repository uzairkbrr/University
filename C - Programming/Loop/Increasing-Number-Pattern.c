#include <stdio.h>

int main(){
	
	int n = 4 ;
	int x = 1;
	
	int i = 1 ;
	while( i <= n ){
		
		for(int j = 1; j <= i ; j++){
			
			printf("%d", x);
			x++ ;	
				
		}
		
		i++ ;
		printf("\n");
	}
	
	return 0;
}