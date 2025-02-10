//Design a program that includes a base class named Animal, and two derived
//classes, Bird and Reptile, that are privately inherited from the Animal class.
//The Animal class has two public data members, the name and age of an
//animal, and a method speak(), leave that empty here. 

// The Bird class has an
//additional private data member named wingLength, representing the length of
//the bird's wings. The Reptile class has an additional private data member
//named habitat, representing the environment where the reptile lives.
//The sub classes will override the speak() method, which displays the name
//and age of the animal along with a message indicating the type of the animal
//and the sound it makes. The Bird class has a specific message indicating that
//the bird can sing, while the Reptile class has a specific message indicating that
//the reptile can creep.
//The main function of the program should create an object of the Bird class
//and an object of the Reptile class, initialize their data members using the
//constructor, and call their speak() member function to display the information.
//Note: None of your class should have getter and setter methods

#include <iostream>
#include <string.h>

using namespace std;

// creating base class for animal 
class Animal{
	
	public:
		int age;
		string name;
		
	// leaving this function empty according to question
	void speak(){
	}
		
	
};

class Bird: public Animal{
	private:
		int wingLength;
		
	public:
		
		// constructor
		Bird(string name, int age){
			this->name = name ;
			this->age = age ;
		}
		
		void speak(){
			cout << endl;
			cout << " ---------------------------------"  << endl;
			cout << "| Bird:-                          |" <<  endl;
			cout << "|                                 |" << endl;
			cout << "| My name is " << name << "               |" <<  endl;
			cout << "| My Age is " << age << "                    |" << endl;
			cout << "| I am a Bird and i can sing ...  |"  << endl;	
			cout << " ---------------------------------"  << endl;		
		}
};

class Reptile: public Animal{
	private:
		string habitat;
		
	public:
		
		// constructor
		Reptile( string name, int age){
			this->name = name;
			this->age = age;
		}
		
		void speak(){
			cout << endl;
			cout << " -------------------------------------"  << endl;
			cout << "| Reptile:-                           |" << endl;
			cout << "|                                     |" << endl;
			cout << "| My name is " << name << "                |" << endl;
			cout << "| My Age is " << age << "                         |" << endl;
			cout << "| I am a Reptile and I can creep ...  |" << endl;	
			cout << " -------------------------------------"  << endl;		
		}
};

int main(){
	
	// creating objects of Bird and Reptile class and assign them values using constructor
	Bird b("Parrot", 18);
	Reptile r("Crocodile", 5);
	
	// calling the speak function of both class 
	// this function will be print the name and age of animal with its additional sound
	b.speak();
	r.speak();
	
	return 0;
}