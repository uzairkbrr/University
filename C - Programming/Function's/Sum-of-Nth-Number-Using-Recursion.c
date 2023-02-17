#include<stdio.h>
int sum(int n);
int main(){
    
    sum(1);
    
    return 0;
}

int sum(int n){
 	
 if (n<=100){  
     
    printf("\t%d", n);
    
    sum(n+1);
}
}