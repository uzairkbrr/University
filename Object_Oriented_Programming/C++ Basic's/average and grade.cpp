#include <iostream>
using namespace std;

int main() {
    
    int physics, maths, computer, english, biology, chemistry ;
    
    cout << "Enter Physics Mark's : " ;
    cin >> physics ;
    cout << "Enter Maths Mark's : " ;
    cin >> maths ;
    cout << "Enter Computer Mark's : " ;
    cin >> computer  ;
    cout << "Enter English Mark's : " ;
    cin >> english ;
    cout << "Enter biology Mark's : " ;
    cin >> biology ;
    cout << "Enter chemistry Mark's : " ;
    cin >> chemistry ;
    
    int average = ( physics + maths + computer + english + biology + chemistry ) / 6 ;   
    
    cout << "------------------" << endl;
    if(average >= 80 && average <= 100)
    {
        cout << "Grade A !" << endl ; 
    }
    else if(average >= 70 && average < 80)
    {
        cout << "Grade B !" << endl;    
    }    
    else if(average >= 60 && average < 70)
    {
        cout << "Grade C !" << endl;
    }
    else if(average >= 50 && average < 60)
    {
        cout << "Grade D !" << endl;
    }
    else 
    {
        cout << "Fail !" << endl;
    }
    
    cout << "Your Average is " << average << endl;
    cout << "------------------" << endl;

    
    
    
    return 0;
}