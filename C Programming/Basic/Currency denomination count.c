// Author: Uzair Ahmad

#include <stdio.h>

int main() {

    // Declare variable to hold the entered amount
    int amount;
    
    // Prompt user to enter the amount
    printf("Enter Money : ");
    // Read the input from the user and store it in the variable 'amount'
    scanf("%d", &amount);
    
    // Calculate the number of notes of each denomination
    int fivek = amount / 5000 ; // For 5k ;
    amount = amount % 5000 ;
    
    int onek =amount / 1000 ; // for 1K ;
    amount = amount % 1000 ;
    
    int fiveh = amount / 500 ; // For 5 Hundred ;
    amount = amount % 500 ;
    
    int oneh = amount / 100 ; // For One Hundred ;
    amount = amount % 100 ;
    
    int fifty = amount / 50 ; // For Fifty ;
    amount = amount % 50 ;
    
	int twenty = amount / 20 ; // For Twenty ;
    amount = amount % 20 ;
    
	int ten = amount / 10 ; // For Ten ;
    amount = amount % 10 ;
    
	int five = amount / 5; // For Five ;
    amount = amount % 5 ;
    
	int two = amount / 2 ; // For Two ;
    amount = amount % 2 ;
    
	int one = amount / 1 ; // For One ;
    
    // Display the number of notes of each denomination to the user
    printf("%d FiveK Note.\n", fivek);
    printf("%d OneK Note.\n", onek);
    printf("%d FiveH Note.\n", fiveh);
    printf("%d OneH Note. \n", oneh);
    printf("%d Fifty Note.\n", fifty);
    printf("%d Twenty Note.\n", twenty);
    printf("%d Ten Note.\n", ten );
    printf("%d Five Note.\n", five);
    printf("%d Two Notes.\n",two);
    printf("%d Once Note.", one);

    return 0;
}