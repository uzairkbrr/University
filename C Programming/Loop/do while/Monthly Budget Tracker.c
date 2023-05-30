//Author: Uzair Ahmad

#include <stdio.h>

int main (){
	
	int Monthly_Budget , spending , extra ;
	int Sum = 0 ;
	char again ;
	
	printf("Enter Your Monthly Budget : ");
	scanf("%d", &Monthly_Budget);	
	
	do {
		
		printf("\nEnter Your Spending : ");
		scanf("%d", &spending);
		
		Sum = Sum + spending ;
		
		printf("\nDo You Spend More Money ? Y/N ");
		scanf(" %c", &again);
		
	}while (again == 'Y' || again == 'y');
	
	// if Monthly Budget is More then Total Spending Then this will be Executed ;
	
	if(Sum > Monthly_Budget )
	{
		extra = Sum - Monthly_Budget ;
		printf("\nYou Spend %d Extra From Your Monthly Budget .", extra);	
		
	}
	
	// if Monthly Budget is Less then Total Spending Then this will be executed 
	
	else if (Sum < Monthly_Budget )
	{
		extra = Monthly_Budget - Sum ;
		printf("\nYou Spend %d Less Then Your Budget ", extra);
	}
	
//	 if Monthly Budget is Equal to Spending Then this will be executed 

	else if( Sum == Monthly_Budget)
	{
		printf("\nYou Spend Equal to Your Budget.");
	}
	
	return 0 ;
}