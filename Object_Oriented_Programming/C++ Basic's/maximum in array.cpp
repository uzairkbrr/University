#include <iostream>
using namespace std;

int main(){
	
		int size = 5 , array[size] ;
		
		cout << "Enter values of array : " << endl;
		
		for( int i = 0 ; i < size ; i++)
		{
			cin >> array[i];
		}
		
		int maximum = array[0] ;
		
		for(int i = 0 ; i < size ; i++)
		{
			if(array[i] > maximum)
			{
				maximum = array[i];
			}
		}
		
		cout << maximum  << " is maximum in array." ;
		
		
	
	return 0;
}