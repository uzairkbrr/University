#include <iostream>
#include <cstdlib> // this liberary is used to operate rand() function ;

using namespace std;


class DICE {
	
	private:
	int value ;
	
	public:
		DICE(){
			value = 0 ;
		}
		
		int roll()
		{
			// rand()%6 is because of we need random number from 1 to 6 
			// Add 1 with random number because if we get 0 then it will automatically changed it to 1;
			value = rand() % 6 + 1 ;
			
			return value ;
		}
	
};
int main(){
	
	char option ;
	
	// Creating object ;
	DICE dice ;
	
	do{
		
		cout << endl;
		cout << " Do you want to roll the DICE ? Y/N : " << endl;
		cin >> option ;
		
		int number = dice.roll();
		
		if(number == 6)
		{
			cout << "Side " << number << " ( Chakka )"  << endl;
		}
		else 
		{
			cout << "Side " << number << " (Better Luck Next Time) " << endl;
		}
		
	}while(option == 'y' || option == 'Y');
	
	return 0;
}