#include <iostream>

using namespace std;

int main() {
    
    int a , b ;
    char sign ;
    string check ;
    
    do{
         cout << "Enter two Number with operator : " ;
         cin >> a >> sign >> b ;
        
        if( sign == '+')
        {
            cout << a << " + " << b << " = " << a + b << endl;
        }
        else if( sign == '-')
        {
            cout << a << " - " << b << " = " << a - b << endl;
        }
        else if( sign == '*')
        {
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else if( sign == '/')
        {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        
        cout << "Do You want to do another calculation ? ( yes / no ) : " ;
        cin >> check ;
            
    }while ( check == "yes" || check == "YES");

    cout << "Thank's for using our program ! " << endl;
    
    return 0;
}