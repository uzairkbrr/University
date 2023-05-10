// Author: Uzair Ahmad
#include <stdio.h>

int main() {
    
   int n1, n2;

printf("Enter 1st Odd Number => "); // Prompt user to enter first odd number

do{
    scanf("%d", &n1); // Take input from user
    
    if(n1 % 2 == 0) // Check if the number is even
    {
        printf("Number 1 is Even !\n "); // Display error message
        printf("Enter 1st Number Again => "); // Prompt user to enter the number again
    }
    
}while(n1 % 2 == 0); // Repeat the loop until an odd number is entered

printf("Enter 2nd Odd Number => "); // Prompt user to enter second odd number

 do{
    scanf("%d", &n2); // Take input from user
    
     if(n2 % 2 == 0) // Check if the number is even
    {
        printf("Number 2 is Even !\n"); // Display error message
        printf("Enter Number 2 again => "); // Prompt user to enter the number again
    }
    
}while(n2 % 2 == 0); // Repeat the loop until an odd number is entered

printf("\n\nSum of %d and %d is %d",n1,n2, n1+n2); // Display the sum of the two odd numbers entered by the user

return 0;

}