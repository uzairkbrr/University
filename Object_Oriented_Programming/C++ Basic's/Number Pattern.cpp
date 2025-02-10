#include <iostream>
using namespace std;

int main() {
    
   int row ;
   
   cout << "Enter Row : " ;
   cin >> row ;
   
   for(int i=1 ;i<=row ;i++)
   {
       int x = 1 ;
      
     for(int j=row; j>=i ; j--)
     {
        cout << x ;
      
        x++ ;
     }
    
    cout << endl;
   }
   
    
    return 0;
}