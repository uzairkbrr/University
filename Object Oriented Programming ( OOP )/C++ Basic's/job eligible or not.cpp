#include <iostream>
using namespace std;

int main() {
  
    int age ;
    char married_or_not , employed_or_not ;
    
    cout << "Enter your age : " ;
    cin >> age ;
    
    if( age >= 25)
    {
        cout << "are you married ? Y/N : " ;
        cin >> married_or_not ;
        
        if(married_or_not == 'y' || married_or_not == 'Y')
        {
            cout << "Did you have any current job ? Y/N : " ;
            cin >> employed_or_not ;
            
            if(employed_or_not == 'N' || employed_or_not == 'n')
            {
                cout << "_________________________" << endl;
                cout << "Congratulation !" << endl;
                cout << "You are eligible for the job !" << endl;
            }
            else
            {
                cout << "_________________________" << endl;
                cout << "You already have Job !" << endl;
                cout << "Job eligibility cirteria not met !" << endl;
            }
            
        }
        else 
        {
            cout << "_________________________" << endl;
            cout << "Job requirement not met !" << endl;
            cout << "You are unmarried !" << endl;
        }
    }
    else 
    {
        cout << "_________________________" << endl;;
        cout << "Age is Less then 25 ! " << endl;
        cout << "Not eligible for the job ! " << endl;
    }
    
    cout << "_________________________" << endl;
    
    return 0;
}