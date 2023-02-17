#include <stdio.h>

int main() {
  
  int num ,sum1=0, sum=1;
  
  printf("Enter Number : ");
  scanf("%d",&num);
  
  for(int i=1;i<=num;i++)
  {
    sum = 1 ;
    
    for(int j=1;j<=i;j++)
    {
        sum = sum * j ;
    }
   
   sum1 = sum1 + sum ; 
  }
  
  printf("Sum : %d",sum1);
  
    return 0;
}