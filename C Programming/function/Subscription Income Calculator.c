//Author: Uzair Ahmad

#include <stdio.h>
 
 int  monthlySubsciptionIncome(int a);
 int  yearlySubsciptionIncome(int b);
 
 int main(){
 	
 	int monthly_user , yearly_user ;
 	
 	printf("Enter Number of User Who Avail Monthly Subscription : ");
 	scanf("%d", &monthly_user);
 	
 	printf("Enter Number of User Who Avail Yearly Subscription : ");
 	scanf("%d", &yearly_user);
 	
 	int x = monthlySubsciptionIncome(monthly_user) ;
 	int y = yearlySubscriptionIncome(yearly_user) ;
 	int result = x + y ;
 	
 	printf("Total Revenue Generated : %d$", result);
 	
 	return 0 ;
 }
 
int  monthlySubsciptionIncome(int a){
	
	return a * 15 ;
}

int  yearlySubscriptionIncome(int b){
	
	return b * 100 ;
}