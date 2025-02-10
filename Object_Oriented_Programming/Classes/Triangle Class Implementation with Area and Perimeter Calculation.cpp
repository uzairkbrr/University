#include<iostream.>  // include the standard input-output stream library
using namespace std;  // use the standard namespace

// define a class called Triangle
class Triangle{  
	private:
		int height;  // declare a private variable for the height of the triangle
		int s1;  // declare a private variable for the length of side 1 of the triangle
		int s2;  // declare a private variable for the length of side 2 of the triangle
		int s3;  // declare a private variable for the length of side 3 of the triangle
		
	public:
		Triangle(int height,int b,int c, int d)  // define a constructor that takes in four arguments
		{
			this->height = height;  // initialize the height variable with the provided argument
			s1 = b;  // initialize the s1 variable with the provided argument
			s2 = c;  // initialize the s2 variable with the provided argument
			s3 = d;  // initialize the s3 variable with the provided argument
		}
		
		void DisplayArea()  // define a method to display the area of the triangle
		{
			cout << "The Area Of the Triangle Is : " << ( height * s1 ) / 2.0 << endl;  // calculate and print the area of the triangle
		}
		
		void DisplayParameter()  // define a method to display the perimeter of the triangle
		{
			cout << "The Parameter Of the Triangle Is : " << ( s1 + s2 + s3 ) << endl;  // calculate and print the perimeter of the triangle
		}
		
};

int main(){  // define the main function
	
    Triangle T = {10,5,5,5};  // create a Triangle object with height 10 and side lengths of 5, 5, and 5
	
	T.DisplayArea();  // call the DisplayArea method of the Triangle object to display the area
	T.DisplayParameter();  // call the DisplayParameter method of the Triangle object to display the perimeter
	
	return 0;  
} 