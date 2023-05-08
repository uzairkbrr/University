#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

void fibonachi(double x);

int main() {
	
	double n;

    cout << "How Many Term's do you want to Print : ";
    cin >> n;

    fibonachi(n);
    
    cout << endl;
    
    cout << "Largest Number in System is  " << __INT_MAX__ << endl;
	    
    return 0;
}

void fibonachi(double x){
	
	cout << "Fibonacci Series: ";

	
    int numOne = 0, numTwo = 1, nextTerm = 0, sum = 1;
    
    for (int i = 3; i <= x; ++i) 
	{
        
        if(i == 3)
        {
        	cout << numOne << " ";
        	cout << numTwo << " ";
		}

        
        nextTerm = numOne + numTwo;
        numOne = numTwo;
        numTwo = nextTerm;
        sum += nextTerm;
        
        cout << nextTerm << " ";
        
    }
    
    cout << endl << endl;
    cout << "Sum of this Series is " << sum << endl;
    
}