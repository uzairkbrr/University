#include <iostream>
using namespace std;

class queue{
	private:
		int* rear;
		int* front;
		int* array;
		int* current;
		int size;
		
	public:
		queue(int size){
			this->size = size;
			array =  new int[size];
			front = NULL;
			rear = NULL;
			current = NULL;
		}
		
		void enQueue(int info){
			
			if(rear == array + size - 1){
				cout << endl << "Overflow" << endl << endl;
				return;
			}
			
			if(front == NULL && rear == NULL){
				front = array;
				rear = array;
				*rear = info;
				cout << endl << "Info enQueued" << endl << endl;
				return;
			}
			
			if(rear < array + size - 1){
				rear++;
				*rear = info;
				cout << endl << "Info enQueued" << endl << endl;
				return;
			}
		}
		
		void deQueue(){
			
			if(front == NULL && rear == NULL){
				cout << endl << "UnderFlow " << endl << endl;
				return;
			}
			
			if(front == rear && rear == array + size -1){
				cout << endl << *front << " dequeued" << endl << endl;
				front = NULL;
				rear = NULL;
				return;
			}
			
			if(front <= array + size - 1){
				cout << endl << *front << " dequeued" << endl << endl;
				*front = -1;
				front++;
				return;
			}
			
		}
		
		void print(){
			current = front;
			
			if(*current != -1 || current != NULL){
				
				while(current != rear + 1){
					cout << *current << " ";
					current++;
				}
				
			} else {
				cout << endl << "Nothing to Print" << endl;
			}
			
			cout << endl << endl;
			
		}
};

int main(){
	
	queue q(5);
	int option, info;
	do{
		cout << "1. enQueue" <<  endl;
		cout << "2. deQueue" << endl;
		cout << "3. print" << endl;
		cout << "0. Exit" << endl;
		cout << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			cout << endl << "Enter Info: ";
			cin >> info;
			q.enQueue(info);
		} else if(option == 2){
			q.deQueue();
		} else if(option == 3){
			q.print();
		}else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
	} while(option != 0);
	
	cout << endl << "Program Exited" << endl << endl;
	
 	return 0;
}