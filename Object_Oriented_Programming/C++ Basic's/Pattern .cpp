#include <iostream>
using namespace std;

int main() {
    
   int row ;
   
   cout << "Enter Row : " ;
   cin >> row ;
   
   for(int i=1 ;i<=row ;i++)
   {
     for(int j=row; j>=i ; j--)
     {
        cout << "*" ;
     }
    
    cout << endl;
   }
   
    
    return 0;
}