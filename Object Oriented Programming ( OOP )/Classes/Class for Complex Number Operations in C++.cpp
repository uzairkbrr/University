//Q No.2: Write the definition for a class called complex that has floating point data members for
//storing real and imaginary parts. The class has the following member functions:
//void set(float, float) to set the specified value in object
//void disp() to display complex number object
//complex sum(complex) to sum two complex numbers &amp; return complex number
//
//1. Write the definitions for each of the above member functions.
//2. Write main function to create three complex number objects. Set the value in two objects and
//call sum() to calculate sum and assign it in third object. Display all complex numbers.

#include <iostream>
using namespace std;

// declaring variable globaly;
int img_no, real_no ;

class complex{
	
	private:
		float real;
		float imagnary;
		
	public:
		
		void set(int real, int imagnary){
			this->real = real;
			this->imagnary = imagnary ;
		}
		
		void Display()
		{
			cout << real << " + " << imagnary << "i" << endl;
		}
	
		int real_sum(int real, int real1)
		{
			return real+real1;
		}
		int img_sum(int img, int img1)
		{
			return img+img1;
		}
};

int main(){
	
	// creating three objects of class complex ;
	complex c1,c2,c3;
	
	int real1,img1;
	int real2,img2;
	
	cout << "Value's for Complex No 1 : " << endl;
	cout << "Real No: " ;
	cin >> real1;
	cout << "Imagnary No: " ;
	cin >> img1 ;
	// asking user for input	
	cout << endl;
	cout << "Value's for Complex No 1 : " << endl;
	cout << "Real No: " ;
	cin >> real2 ;
	cout << "Imagnary No: " ;
	cin >> img2 ;
	
	c1.set(real1,img1); // using setter to set values to complex no 1;
	c2.set(real2, img2); // using setter to set values to complec no 2;

	int c3_real = c1.real_sum(real1, real2);// using function member of class to find sum of real and imagnary number
	int c3_img = c2.img_sum(img1, img2); // using function member of class to find sum of real and imagnary number
	
	c3.set(c3_real, c3_img); // setting the values (answers of complex number) as input to 3rd complex no;

	cout << "--------------------------" << endl;
	cout << "     : O U T P U T : " << endl;
	cout << "--------------------------" << endl;
	
	cout << endl;
	cout << "Complex No 1 : " ;
	c1.Display();
	
	cout << endl;
	cout << "Complex No 2 : " ;
	c2.Display();
	
	cout << endl;
	cout << "Complex No 3 : " ;
	c3.Display();
	
	
	return 0;
}