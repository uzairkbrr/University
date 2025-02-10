#include <iostream>
using namespace std;

class List{
	private:
		int size;
		int length;
		int *array; 
		int *current;
		int *tail;
		
	public:
		List(int size){
			length = 0;
			this->size = size;
			array = new int[size];
			current = NULL;
			tail = NULL;
		}
		
		~List(){
    		delete[] array;
		}		
		
		void GoToStart(){
			current = array;
		}
		
		void GoToTail(){
			current = array + length - 1;
		}
		
void GoToBack(){
	if(current > array){
		current--;
	} else {
		cout << endl <<  "Already at start of the List" << endl;
	}
}
	
void GoToNext(){
	if(current < array + length - 1){
		current++;
	} else {
		cout << endl <<  "Already at End of the List" << endl;
	}
} 
		
void add(){
	if(length == 0){
		GoToStart();
		cout << "Enter Number: ";
		cin >> *current;
			
		tail = array;
		length++;
		return;
	}
			
	if(length < size ){
		
		GoToStart();
		
		int option;
		cout << "1. After Any Key" << endl;
		cout << "2. At the End" << endl << endl;
		cout << "Your Option => ";
		cin >> option;
			
		if(option == 1){
			int key;
		 	cout << "Enter the Key after which You Want to Insert the New Number: ";
			cin >> key;
				 
				 
			//finding the address of the key in the array
			while(current <= tail){
			 	if(*current == key){
			 		break;
				}
				GoToNext();
				
			}
				 
				int *temp = tail;
				tail++;
				while(current < temp){
				 	*(temp+1) = *(temp);
					temp--; 
				}
					 
				cout << "Enter the Value: ";
				cin >> *temp;
				length++;
					 
			} else if(option == 2){

				tail++;
				cout << "Enter the Value: ";
				cin >> *tail;
				length++;
				return;
					
			} else {
			cout << endl << "Invalid Input "<< endl << endl;
			}
	} else {
			cout << endl << "No Space in List" << endl << endl;
	}
}
		
void remove(){
    if(length == 0){
        cout << endl << "Nothing to Delete" << endl << endl;
        return;
    }

    GoToStart();

    int key;
    cout << endl << "Enter the Number: ";
    cin >> key;

    while(current <= tail){
        if(*current == key){
            for (int *ptr = current; ptr < tail; ptr++) {
                *ptr = *(ptr + 1);
            }
            tail--;
            length--;
            cout << endl << "Number Removed " << endl << endl;
            return;
        }
        current++;
    }
    cout << endl << "Number not found in the List" << endl << endl;
}


void print(){
	
	if(length != 0){
		
		GoToStart();
		cout << endl << "The List is " ;
		
		while(current <= array){
			cout << *current << " ";
			current++;
		}
	
		cout << endl;
	
	} else {
		cout << endl << "Nothing to Print !" << endl << endl;
	}
}
		
};

int main(){
	
	int option;
	List l(4);
	
	do{
		cout << endl;
		cout << "1. Add " << endl;
		cout << "2. Remove" << endl;
		cout << "3. Print" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Enter Your Option => ";
		cin >> option;
		
		if(option == 1){
			l.add();
		} else if(option == 2){
			l.remove();
		} else if(option == 3){
			l.print();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input" << endl;
		}
		
		
	}while(option != 0);
	
	return 0;
}