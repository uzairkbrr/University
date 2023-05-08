#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

double Distance(double x1, double x2, double y1, double y2);

int main(){
	
	double x1, x2, y1, y2 ;
	
	cout << "Enter X1 => ";
	cin >> x1;
	
	cout << "Enter X2 => ";
	cin >> x2;
	
	cout << "Enter Y1 => ";
	cin >> y1;
	
	cout << "Enter y2 => ";
	cin >> y2;
	
	double answer = Distance(x1,x2,y1,y2);
	
	cout << "Answer = " << answer << endl;
	 
	return 0;
}


double Distance(double x1, double x2, double y1, double y2){
	
//	formula = sqrt( (x2-x1)^2 + (y2-y1)^2 );
	
	// finding (x2-x1)^2
	double x = (x2 - x1) * (x2 - x1);
	// finding (y2-y1)^2;
	double y = (y2 - y1) * (y2 - y1);
	
	// now adding them for finding their square root;
	double tosqrt = x + y ;
	
	//inbuilt function to find square root of any number;
	double answer = sqrt(tosqrt);
	
	// returning the answer;
	return answer;
	
}