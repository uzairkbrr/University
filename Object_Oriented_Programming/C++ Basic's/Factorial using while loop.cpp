// Take a number from user and make a table of that number using do while loop

#include <iostream>
using namespace std;

int main() {
    
   int number ;
   
   cout << "Enter Number : " ;
   cin >> number ;
   
   int factorial = 1 ;
   
   int i = 1 ;
   while ( i <= number )
   {
       factorial *= i ;
       
       i++ ;
   }
   
   cout << " Factorial of " << number << " is " << factorial ;
    
    return 0;
}