#include <iostream>
using namespace std;

void factorial(int num);

int main(){
	
	int number ;
	string again ;
	
	do{
	
	cout << "Enter number to find it's factorial : " ;
	cin >> number ;
	
	factorial(number);
	
	cout << "want to check another factorial : " ;
	cin >> again ;
	
	cout << "_____________________ " << endl;
	
	} while( again == "YES" || again == "yes");
	
	cout << "Thank's for using our program !" ;
	
	return 0;
}

void factorial(int num){
	
	int fact = 1 ;
	
	for(int i=1 ; i<=num ; i++)
	{
		fact *= i ;
	}
	
	cout << "Factorial of " << num << " is " << fact << endl;
	cout << "_____________________ " << endl;
}