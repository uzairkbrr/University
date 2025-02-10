// Author: Uzair Ahmad
#include<iostream>
using namespace std;

struct Time{
	
	int day;
	int month;
	int year;
	
	// i wrote this code on 11-3-2023 so it is the date of that day;
	Time(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	
//	this function will display time to user;
	void DisplayTime()
	{
		cout<<"Day : "<<day<<endl;
		cout<<"Month : "<<month<<endl;
		cout<<"Year : "<<year<<endl<<endl<<endl;
	}
	
	// this function will check day,month accordingly 
	void Check()
	{
		if(day > 30)
		{
			day = day - 30;
			month++;
			
			if(month > 12)
			{
				month = month -12;
				year++;
				
			}
		}
	}
};

int main(){
	
	int day,month,year, addedDays;
	
	// taking current time as input from user ;
	cout << "Enter Current Date :-" << endl << endl;
	cout << "Enter Day => " ;
	cin >> day;
	cout << "Enter Month => ";
	cin >> month;
	cout << "Enter Year => " ;
	cin >> year ;
	
	
	// creating object of Time class and passing it 3 parameter ;
	// we create a constructer that will accept 3 parametes;
	Time T1(day,month,year);
	
	cout << endl << endl;
	cout<<"Current Date is"<<endl;
	
	T1.DisplayTime();
	
	cout<<"Enter the Amount Of Days you want to Add :- ";
	cin>>addedDays;
	
	T1.day = T1.day + addedDays;
	
	T1.Check();
	
	T1.DisplayTime();
	
	return 0;
}