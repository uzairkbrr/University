#include<stdio.h>
int main(){
		
		int a,b,c;
		
		printf("Enter Number a : ");
		scanf("%d",&a);
		
		printf("Enter Number b : ");
		scanf("%d",&b);
		
		printf("Enter Number c : ");
		scanf("%d",&c);
		
		int formula = (a*a) + (b*b) + (c*c) + 2*((a*b)+ (b*c) + (c*a));
		
		printf("Answer of (a+b+c)^2 : %d", formula);
		
		
	return 0;
}
