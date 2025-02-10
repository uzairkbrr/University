#include <iostream>
using namespace std;

int main(){
	
		int size = 5 , array[size] ;
		
		cout << "Enter values of array : " << endl;
		
		for( int i = 0 ; i < size ; i++)
		{
			cin >> array[i];
		}
		
		int minimum = array[0] ;
		
		for(int i = 0 ; i < size ; i++)
		{
			if(array[i] < minimum)
			{
				minimum = array[i];
			}
		}
		
		cout << minimum  << " is minimum in array." ;
		
		
	
	return 0;
}