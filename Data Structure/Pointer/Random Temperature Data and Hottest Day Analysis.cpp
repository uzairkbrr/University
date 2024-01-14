// Author: Uzair Ahmad
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){
    // Define the number of weeks and days in a week
	int weeks = 4, days = 7;
	int temp[weeks][days];
		 
	int *ptr = &temp[0][0];
	
	// Generate random temperature values for each day of each week
	for(int i=0; i<weeks; i++){
		for(int j=0; j<days; j++){
			*ptr = rand() % 20 + 10; // Generate a random temperature between 10 and 29
			ptr++;
		}
	}
	
	ptr = &temp[0][0];
	
	// Display the temperature values for each day of each week
	for(int i=0; i<weeks; i++){
		cout << "Week " << i+1 << ": ";
		
		for(int j=0; j<days; j++){
			cout << *ptr <<  " " ;
			ptr++;
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	ptr = &temp[0][0];
	
	// Find the hottest day of each week and its corresponding temperature
	for(int i=0; i<weeks; i++){
		int maximum = *ptr, day = 0;
		string dayName;
		
		for(int j=0; j<days; j++){
			if(maximum <= *ptr){
		 		maximum = *ptr;
		 		day = j+1;
			}

			// Determine the day name based on the day index
			switch(day) {
				case 1: dayName = "Monday"; break;
				case 2: dayName = "Tuesday"; break;
				case 3: dayName = "Wednesday"; break;
				case 4: dayName = "Thursday"; break;
				case 5: dayName = "Friday"; break;
				case 6: dayName = "Saturday"; break;
				case 7: dayName = "Sunday"; break;
			}
						
			ptr++;			
		}
		cout << "Hottest day of Week " << i+1 << " is: " << dayName << " having Temperature: " << maximum << endl;
	}
}
