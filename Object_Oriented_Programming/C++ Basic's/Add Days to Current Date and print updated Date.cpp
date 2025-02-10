#include <iostream>
using namespace std;


int main(){
	
	int day,month,year,DaysToAdd;
	
	cout << "Enter Current Date:-" <<endl;
	cout << "Day => " ;
	cin >> day;
	cout << "Month => ";
	cin >> month;
	cout << "Year => " ;
	cin >> year;
	
	cout << endl << endl;
	cout << "How Many Days do you want to add ? :- " ;
	cin >> DaysToAdd;
	
	day += DaysToAdd;
	
	// if days is greater then 30 then
	if(day > 30)
	{
		// divide days by 30 so it will give us months then add it with months
		month += (day/30);
		
		// take modulo of total days with 30
		day %= 30;
		
		// if month is greater then 12 then
		if(month > 12)
		{
			// take modulo of month with 12 so it will give us valid month
			month %= 12;
			// increment in year when month become greater then 12;
			year++;
		}
	}
	
	cout << endl << endl;
	cout << "Updates Date:-" << endl << endl;
	cout << "Day => " << day << endl;
	cout << "Month => " << month << endl;
	cout << "Year => " << year << endl;
	return 0;
}