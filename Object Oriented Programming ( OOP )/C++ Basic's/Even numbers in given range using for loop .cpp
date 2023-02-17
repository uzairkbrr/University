#include <iostream>

using namespace std;

int main() {
    
    int number ;
    
    cout << "Enter Range till you want to find even number's : " ;
    cin >> number ;
    
    cout << "Even Number's in Given Range are : " ;
    
    for(int i = 1 ; i <= number ; i++)
    {
        if( i % 2 == 0)
        {
            cout << " " << i ;
        }
    }

    return 0;
}