#include <iostream>
using namespace std;

struct time{
  int day;
  int month;
  int year;
};

int main() {
    
    time quiz;
    int addDays;
    char again;
    
    do{
    	
	cout << endl;
    cout << "Enter Today's Date:" << endl;
    cout << endl;
    
    cout << "Day: " ;
    cin >> quiz.day;
    cout << "Month (1-12): " ;
    cin >> quiz.month;
    cout << "Year:" ;
    cin >> quiz.year;

	cout << endl;
	cout << "____________________" << endl;
	cout << "How many days do you want to Add(1-30): ";
	cin >> addDays;
	cout << "____________________" << endl;
	
    quiz.day += addDays;
    
    if(quiz.day>30)
    {
        quiz.day -= 30;
        quiz.month++;
        
        if(quiz.month>12)
        {
            quiz.month -= 12;
            quiz.year++;
        }
    }
    
    cout << endl;
    cout << " 	___________________" << endl;
    cout << "	Date after Updating: " << endl;
    cout << "	Day: " << quiz.day  << endl;
    cout << "	Month: " << quiz.month  << endl;
    cout << "	Year: " << quiz.year  << endl;
    cout << "	____________________ << endl;
    cout << endl;
    
    cout << "Want to Add another Date: (Y/N) : ";
    cin >> again;
    
    cout << "____________________" << endl;
    
    
	}while(again == 'y' || again == 'Y');
	
	cout << endl;
	cout << "Thanks for using our program!" << endl;
    

    return 0;
}