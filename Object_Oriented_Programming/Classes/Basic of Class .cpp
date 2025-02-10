#include <iostream>
using namespace std;

// Rules of Class declaration 

// class keyword is compulsary for creating class in c++ ; 
// sum will be anything ( just a random name ) ;
// give your class meaning full name ;

//NOTE : all the members and functions inside the class is private ;
class sum {
    
    private: // all members is private by default ;
    int a,b,c ; // Data members ;
    
    // Fucntion which is inside the class is called member function ;
    public:
	// public variable is used to make our data members and member fucntion public ;
	// after doing this we can access our data members and member function outside the class ; 

	void get_data(){ // Member functions for getting data from user ;
		cout << "Enter A : " ; cin >> a ;
		cout << "Enter B : " ; cin >> b ;
		cout << "Enter C : " ; cin >> c ;		
	}
	
	void display_data(){ // function for printing data on screen ;
		cout << "Value of A : " << a << endl;
		cout << "Value of B : " << b << endl;
		cout << "Value of C : " << c << endl;
	}
};

int main() {
    
        
	//creating object from class ;
	// sum is classname ;
	// s1 is object ; (we can named it anything)
	sum s1 ;
	
	//if we want to access class member
	 
	// Step 1: Write Object name ;
	// Step 2: Write " . " operator with object name ;
	// write member name which you want to access ;
	
	// NOTE : we can only access public members ;
	
	s1.get_data() ; 
	
	s1.display_data();
    
    return 0;
}