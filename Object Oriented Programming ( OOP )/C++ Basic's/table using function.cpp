#include <iostream>

using namespace std;

void table(int x);

int main(){

	int number ;
	string again ;
	
	do{
	
	cout << "Enter Number to find table : " ;
	cin >> number ;
	
	table(number);	
	
	cout << "do you want to print table again ? yes / no : " ;
	cin >> again ;
	
	}while (again == "yes" || again == "YES");
	
	cout << "Thank's for using our program !" ;
}

void table(int x){
	
	for(int i = 1 ; i <= 10 ; i++)
	{
		cout << x << " * " << i << " = " << x*i << endl;
	}
}