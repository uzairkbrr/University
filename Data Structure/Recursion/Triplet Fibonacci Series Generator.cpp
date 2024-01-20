#include <iostream>
using namespace std;


void series(int n1, int n2, int n3, int count, int limit){
	
	if(count == limit){
		return;
	}
	
	if(count == 3){
		cout << n1 << " " << n2 << " " << n3 << " ";
	}
	
	int newNumber = n1 + n2 + n3;
	
	cout << newNumber << " ";
	
	series(n2,n3,newNumber,count+1,limit);
	
}



int main(){
	
	int n1,n2,n3,limit;
	cout << "This Program will find a Series" <<endl;
	cout << "Every Number is Generated from the SUM of Previous 3 Numbers" << endl << endl;
	
	cout << "Enter Numbers to Find Series: " << endl;
	cout << "Number One: ";
	cin >> n1;
	cout << "Number Two: ";
	cin >> n2;
	cout << "Number Three: ";
	cin >> n3;
	
	
	cout << endl << endl << "Enter the Limit of the Series (How Many Elementes you Want in your series): ";
	cin >> limit;
		

	cout << "Series is: " ;
	series(n1,n2,n3,3,limit);
	
	return 0;
}