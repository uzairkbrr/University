#include<stdio.h>
int main(){
	int a;
	
	printf("Enter Number :");
	scanf("%d",&a);
	
	int i;
	
	for(i=1; i<=10; i++){
		
		printf("%d * %d = %d \n", a , i , a*i);
		
	}
	
	return 0;
}
