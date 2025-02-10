//You have been asked to design a program that simulates the behavior of a
//Skimmer, which is a type of boat that is capable of both swimming and flying.
//To accomplish this, you will create a Skimmer class that is derived from two
//base classes, Boat and Plane using protected inheritence.
//
//The Boat class will contain data member called boatLength, which represents
//the length of the boat, and a member function called swim(), which prints the
//message “I am swimming”

//The Plane class will contain a data member called maxAltitude, which
//represents the maximum altitude the plane can reach, and a member function
//called fly(), which prints the message “I am flying”.

//The Skimmer class will contain a private data member called numPassengers,
//which represents the number of passengers the skimmer can carry, and a
//public member function called swimAndFly(), which will class the swim()
//and fly() method of the super classes.

//In the main function, create an object of the Skimmer and initialize through
//constructor.

//Display the properties of the Skimmer object using the display() member
//function. Finally, call the swimAndFly() function to simulate the behavior of
//the Skimmer.
//Note: None of your class should have getter and setter methods, only initialize
//the object through a constructor.

#include <iostream>
#include <string.h>
using namespace std;

class Boat {
	
	public:
		int boatLength;
		
		void swim(){
			cout << "| I am Swiming...                |" << endl;
		}
};

class Plane{
	public:
		int maxAltitude;
		
		void fly(){
			cout << "| I am Flying...                 |" << endl;
			cout << " --------------------------------" << endl;
		}
};

class Skimmer: protected Boat, protected Plane{
	public:
		string name;
		int numPessengers;
		
		// constructor
		Skimmer(string name, int boatLength, int maxAltitude, int numPessengers){
			this->name = name;
			this->boatLength = boatLength;
			this->maxAltitude = maxAltitude;
			this->numPessengers = numPessengers;
		}
		
		// function for displying the values of SKimmer
		void Display(){
			cout << endl; 
			cout << " --------------------------------" << endl;
			cout << "| Skimmer Name: " << name << "       |" << endl;
			cout << "| Length: " << boatLength << "ft                   |"<< endl;
			cout << "| Max Altitude : " << maxAltitude << "ft           |" << endl;
			cout << "| Pessengers: " << numPessengers << "                  |" << endl;
			cout << "|                                |" << endl;
		}
		
		void SwimAndFly(){
			Boat::swim();
			Plane::fly();
		}
};

int main(){
	
	// create an object of Skimmer class
	Skimmer S("Swim & Fly", 85, 850, 5);
	
	// calling it function to print values
	S.Display();
	
	// calling it function to print its functionalities;
	S.SwimAndFly();
	
	return 0;
}
