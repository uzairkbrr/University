#include <iostream>

using namespace std;

int main() {
    
    int number ;
    
    cout << "Enter number to find it's factorial : " ;
    cin >> number ;
    
    int factorial = 1 ;
    
    for(int i = 1 ; i <= number ; i++)
    {
        factorial *= i ;
    }

    cout << " Factorial of " << number << " is " << factorial ;
    return 0;
}