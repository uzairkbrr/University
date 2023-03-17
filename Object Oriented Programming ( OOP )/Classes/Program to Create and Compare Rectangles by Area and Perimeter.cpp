#include <iostream>
using namespace std;

class Rectangle{
	private:
		float length , width ;
		
	public:
		
		
		// setters
		void set_length(float length)
		{
			this->length = length ;
		}
		
		void set_width(float width)
		{
			this->width = width;
		}
	
		// function to count parameter 
		float parameter()
		{
			return (2*length + 2*width);
		}
			
		// function to count area 
		float area()
		{
			return (this->length * this->width);
		}
		
		// function to show the length and width of rectangle object;
		void show()
		{
			cout << "Width : " << this->width << endl;
			cout << "Length : " << this->length << endl;
		}
};


void same_area(Rectangle r1, Rectangle r2){
	
	cout << endl;
	
	if(r1.area() == r2.area())
	{
		cout << " ---------------------------------" << endl;
		cout << "| Area of Both Rectangle are Same |" << endl;
		cout << " ---------------------------------" << endl;	
	}
	else 
	{
		cout << " -------------------------------------" << endl;
		cout << "| Area of Both Rectangle are not Same |" << endl;
		cout << " -------------------------------------" << endl;
	}
	
	if(r1.parameter() == r2.parameter())
	{
		cout << " --------------------------------------" << endl;
		cout << "| Parameter of Both Rectangle are Same |" << endl;
		cout << " --------------------------------------" << endl;
	}
	else 
	{
		cout << " ------------------------------------------" << endl;
		cout << "| Parameter of Both Rectangle are not Same |" << endl;
		cout << " ------------------------------------------" << endl;
	}
	
	
}


int main(){
	
	Rectangle r1, r2;
	
	char again;
	// creating this variable for getting input from user on run time  
	float length , width ;
	
	do{
		
		
		// taking input from user ;
		cout << endl;
		cout << "Data for Rectangle 1" << endl;
		cout << "Length : " ;
		cin >> length ;
		cout << "Width : " ;
		cin >> width ;
		
		// setting length and width for r1;
		r1.set_length(length);
		r1.set_width(width);
				
		cout << endl;
		cout << "Data for Rectangle 2" << endl;
		cout << "Length : " ;
		cin >> length ;
		cout << "Width : " ;
		cin >> width ;
		
		// setting length and width for r2;
		r2.set_length(length);
		r2.set_width(width);


		// Displaying Data;
		cout << endl;
		cout << "-------------" << endl;
		cout << "Rectangle 1: " << endl;
		r1.show();
		cout << "Area : " << r1.area() << endl;
		cout << "Parameter : " << r1.parameter() << endl;
		
		cout << endl;
		cout << "-------------" << endl;
		cout << "Rectangle 2: " << endl;
		r2.show();
		cout << "Area : " << r1.area() << endl;
		cout << "Parameter : " << r2.parameter() << endl;

		same_area(r1 , r2);// calling function to check weather area of both rectangle is same or not 
	
		cout << endl;
		cout << "Want to Check another Rectangle's  (Y/N) : " ;
		cin >> again;
		
	}while(again == 'y' || again == 'Y');	
	
		cout << endl;
		cout << "Thank's for using our program !" << endl;
		
	return 0;
}