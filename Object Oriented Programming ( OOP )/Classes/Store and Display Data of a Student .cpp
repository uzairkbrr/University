// Author: Uzair Ahmad
#include<iostream>
#include <string.h>

using namespace std;

// class to store data of a student
class Student{private:
	string name; // name of the student
	int rollNumber; // roll number of the student
	string address; // address of the student
	string phNumber; // phone number of the student


public:
	
	// setters to set the values of private members of the class
	void setName(string name)
	{
		this->name = name;
	}
	
	void setrollNumber(int rollNumber)
	{
		this->rollNumber=rollNumber;
	}
	
	void setaddress(string address)
	{
		this->address=address;
	}
	
	void setphNumber(string phNumber)
	{
		this->phNumber=phNumber;
	}
	
	// function to display data to user
	void Display()
	{
		cout << endl << endl;
		cout<<"The Name Is : "<<name<<endl;
		cout<<"The Roll Number Is : "<<rollNumber<<endl;
		cout<<"The Address Is : "<<address<<endl;
		cout<<"The Phone Number Is : "<<phNumber<<endl;
		cout << endl << endl;
	}
};

int main(){
	Student S1;

	cout << "Enter the following data for Student :- " << endl;
	string input;
	cout<<"Name => ";
	fflush(stdin);
	getline(cin,input);
	
	S1.setName(input);
	
	int input2;
	cout<<"Roll Number => ";
	cin>>input2;
	
	S1.setrollNumber(input2);
	
	cout<<"Address=> ";
	fflush(stdin);
	getline(cin,input);
	
	S1.setaddress(input);
	
	cout<<"Phone Number => ";
	fflush(stdin);
	getline(cin,input);
	
	S1.setphNumber(input);
	
	S1.Display();

return 0;
}