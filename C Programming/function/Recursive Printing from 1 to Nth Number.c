//Author: Uzair Ahmad

#include<stdio.h>
int print(int n, int number);

int main(){
    
     	
 	int number ;
 	
 	printf("Enter Number till you Print the number's => ");
 	scanf("%d", &number);
 	
    print(1, number);
    
    return 0;
}

int print(int n,int number){
 	
 	if(n<=number){  
     
    	printf("\t%d", n);
    
    	print(n+1, number); // Call the sum function with the next number
	}
}