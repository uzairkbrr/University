//Suppose you are designing a program to manage a company's employee
//database. Each employee has a unique ID, a name, a job title, and no of
//hours worked per week. In main ask the user to enter the no of employees
//and then create an array of that no of employees and initialize their values.
//Your class must use getter and setter methods where required. The class
//must have a method named cacl_Salary()
//Now calculate the salary of each employee based on the following details:
//If the no of hours worked of that employee is less than or equal to 40, the
//salary would be hours worked multiplied by the hourly rate. If the no of
//hours worked is greater than 40, then he will get an overtime. The pay for
//the overtime hours is double than what he gets for the base hours. For that
//calculate the extra hours worked and calculate the pay only for the overtime
//and add it to the base pay. Do this for all the employees and display the
//name and salary of all the employees.


// Author: Uzair Ahmad;

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class CompanyEmploye{
	
	private:
		int id;
		string name;
		string jobTitle;
		int noOfHoursperWeek;
		int hourRate;
	
	public:
		
		CompanyEmploye(int id=0,string name="-----",string jobTitle="-----",int noOfHoursperweek=0,int hourRate=10)
		{
			this->id=id;
			this->name=name;
			this->jobTitle=jobTitle;
			this->noOfHoursperWeek=noOfHoursperweek;
			this->hourRate=hourRate;	
		}

		// setters;
		void set_id(int id)
		{
			this->id=id;
		}
		
		void set_name(string name)
		{
			this->name = name;
		}
		
		void set_jobTitle(string jobTitle)
		{
			this->jobTitle = jobTitle;
		}
		
		void set_noOfHoursperweek(int noOfHoursperweek)
		{
			this->noOfHoursperWeek = noOfHoursperweek;
		}

		
		// getters;

		int get_id()
		{
			return id;	
		}
		
		string get_name()
		{
			return name;
		}	
		
		int get_noOfHours()
		{
			return noOfHoursperWeek;
		}
		
				
		// this function will calculate the salary of employe and then return it;
		int cal_base_salary(int noOfHoursperweek)
		{
			return (noOfHoursperweek * hourRate);
		}	
		
		int cal_overtime_salary(int noOfHoursperweek)
		{
			return (noOfHoursperweek * (hourRate+hourRate));	
		}
		
};

int main(){
	
	int noOfEmployes, id, salary, extra_salary , hours_per_week;
	string name, job_title;
	
	cout << "Enter No of Employee's : " ;
	cin >> noOfEmployes;
	
	CompanyEmploye employe[noOfEmployes];
	
	for(int i=0 ; i<noOfEmployes ; i++)
	{
		cout << endl;
		cout << "No: " << i+1 << endl;
		cout << "Employe ID: " ;
		cin >> id;
		employe[i].set_id(id);
		
		cout << "Employe Name: " ;
		fflush(stdin);
		getline(cin, name);
		employe[i].set_name(name);
		
		cout << "Employe Job Title: " ;
		fflush(stdin);
		getline(cin, job_title);
		employe[i].set_jobTitle(job_title);
		
		cout << "Employe Work Hours per Week: " ;
		cin >> hours_per_week;
		employe[i].set_noOfHoursperweek(hours_per_week);

	}	

	
	for(int i=0; i<noOfEmployes; i++)
	{
//		salary = employe[i].cal_base_salary(hours_per_week);
		extra_salary = employe[i].cal_overtime_salary(hours_per_week);
		
		cout << endl;
		cout << "Employe ID: " << employe[i].get_id() << endl;
		cout << "Employe Name: " << employe[i].get_name() << endl;
		
		int hours = employe[i].get_noOfHours();
		
		if(hours <= 40)
		{
		  	cout << "Salary: " << employe[i].cal_base_salary(hours) << endl; 
		}
		else if(hours > 40)
		{
			int extra_hours = hours - 40;
			hours = hours - extra_hours;
			
			int base_salary = employe[i].cal_base_salary(hours);
			int extra_salary = employe[i].cal_overtime_salary(extra_hours);
			
			
			cout << "Basic Salary: " << base_salary << endl;
			cout << "Over Time Salary: " << extra_salary << endl;
			cout << "Total Salary: " << base_salary+extra_salary << endl;
		}
		
	}
	
	return 0;	
}