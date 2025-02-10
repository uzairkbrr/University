#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	
	int trips;
	
	cout << "How Many Trips : ";
	cin >> trips;
	
	int miles[trips], galons[trips];
	float milage[trips];
	
	for(int i=0 ;i<trips ; i++)
	{
		cout << "Enter Miles for Trip No " << i+1 << " : ";
		cin >> miles[i];
		cout << "Enter Galons for Trip No " << i+1 << " : ";
		cin >> galons[i];
		cout << endl;
	}
	
	float totalMiles=0, totalGalons=0;
	
	cout << endl;
	cout << "-------------------------------" << endl;
	for(int i=0 ;i<trips ; i++)
	{		
		milage[i] = float(miles[i]) / float(galons[i]);
		
		totalMiles += miles[i];
		totalGalons += galons[i];
		
		
		cout << "Milage for Trip No " << i+1 << " is "<< milage[i] << endl ;
	}
	
	cout << "-------------------------------" << endl;
	
	cout << endl << endl;
	cout << "Total Miles of all trips : " << totalMiles << endl;
	cout << "Total Galons of all trips : " << totalGalons << endl;
	
	
	
	return 0;
}