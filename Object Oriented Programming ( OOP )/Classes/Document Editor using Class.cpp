#include <iostream>
#include <string.h>
using namespace std;

class document{
	
	private:
		int size;
		int HowManyLines;
		string *array;
		
	public:
		
		document(int size)
		{
			this->size = size;
			array = new string[size];
		}
		
		void addLine(string lineToAdd)
		{
			string *newArray = new string[size+1];
			
			for(int i=0;i<size;i++)
			{
				newArray[i] = array[i];
			}
			
			delete[] array;
			
			newArray[size] = lineToAdd;
			
			array = newArray;
			
			size++;
			HowManyLines++;
			
			cout << "\t --------------------------" << endl;
			cout << "\t| Lines Successfully Added |" << endl;
			cout << "\t --------------------------" << endl;
		}
		
		void deleteLine(int indexNo)
		{
			if(indexNo > 0 && indexNo <= size)
			{
			
				for(int i=indexNo-1;i<size-1;i++)
				{
					array[i] = array[i+1];
				}
				
				size--;
				HowManyLines--;
			
				cout << "\t ----------------------------" << endl;
				cout << "\t| Lines Successfully Deleted |" << endl;
				cout << "\t ----------------------------" << endl;
			}
			else 
			{
				cout << endl;
				cout << "\t ----------------" << endl;
				cout << "\t|Invalid Line No !" << endl;
				cout << "\t ----------------" << endl;
			}
			
		
		}
		
		void updateLine(int indexNo, string LineToUpdate)
		{
			if(indexNo > 0 && indexNo <= size)
			{
				array[indexNo-1] = LineToUpdate;
				
				cout << "\t ----------------------------" << endl;
				cout << "\t| Lines Successfully Updated |" << endl;
				cout << "\t ----------------------------" << endl;
			}
			else 
			{
				cout << endl;
				cout << "\t ----------------" << endl;
				cout << "\t|Invalid Line No !" << endl;
				cout << "\t ----------------" << endl;
			}
		}
		
		void printAllLine()
		{
			if(this->size > 0)
			{
			
				for(int i=0;i<size;i++)
				{
					cout << i+1 << "\t) " << array[i] << endl;
				}
			}
			else if(this->size == 0)
			{
				cout << "\tThese is No Content in Your Document !" << endl;
				cout << "\tPlease Add Some Lines !" << endl;
			}
		}
		
		void printSingleLine(int indexNo)
		{
			if(indexNo > 0 && indexNo <= size)
			{
				cout << array[indexNo-1] << endl;
			}
			else 
			{
				cout << endl;
				cout << "\t ----------------" << endl;
				cout << "\t|Invalid Line No !" << endl;
				cout << "\t ----------------" << endl;
			}
		}
		
		int getLinesNo()
		{
			return HowManyLines;
		}
		int getSize()
		{
			return this->size;
		}
};

int main(){
	
	document object(0);
	
	int option ;
	int index;
	string line;
	
	do{
		cout << endl;
		cout << "\t --------------------------" << endl;
		cout << "\t| 1. Add Line              |" << endl;
		cout << "\t| 2. Update Line           |" << endl;
		cout << "\t| 3. Delete Line           |" << endl;
		cout << "\t| 4. Print All Lines       |" << endl;
		cout << "\t| 5. Print Single Lines    |" << endl;
		cout << "\t| 6. Check How Many Lines  | " << endl;
		cout << "\t| 7. Exit                  |" << endl;
		cout << "\t--------------------------" << endl;
		
		cout << endl << "\tYour Option => " ;
		cin >> option ;
		cout << endl ;
		
		if(option == 1)
		{
			cout << "\tEnter Line to Add => " ;
			fflush(stdin);
			getline(cin, line);
			object.addLine(line);
		}
		else if(option == 2)
		{
			cout << "\tEnter Line number do you want to update (1 - " << object.getSize() << " ) => " ;
			cin >> index;
			
			cout << "\tEnter Line Content => ";
			fflush(stdin);
			getline(cin, line);
			
			object.updateLine(index, line);
		}
		else if(option == 3)
		{
			cout << "\tEnter Line No you want to delete (1 - " << object.getSize() << " ) => ";
			cin >> index;
			
			object.deleteLine(index);
		}
		else if(option == 4)
		{
			cout << endl;
			object.printAllLine();	
		}
		else if(option == 5)
		{
			cout << endl;
			cout << "\tWhich Line Do You want to Print (1 - " << object.getSize() << " ) => ";
			cin >> index;
			object.printSingleLine(index);
		}
		else if(option == 6)
		{
			cout << endl;
			cout << "\tThere are total " << object.getLinesNo() << " in your Document " << endl;
		}
		else if(option == 7)
		{
			break;
		}
		else 
		{
			cout << "\tInvalid Input !" << endl;
		}
		
	}while(option != 7);
	
	cout << "\t ------------------------------" << endl;
	cout << "\t| Thanks for Using our Program ! " << endl;
	cout << "\t ------------------------------" << endl;
	
	return 0;
}