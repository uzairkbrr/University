#include <iostream>
using namespace std;

struct node{
	int info;
	node* next;
	
	node(int info){
		this->info = info;
		this->next = NULL;
	}	
};

class Queue{
	public:
		node* rear;
		node* front;
		node* temp;
		int size;
		
		Queue(){
			this->rear = NULL;
			this->front = NULL;
			this->temp = NULL;
			this->size = 0;
		}
		
		void EnQueue(int info){
			
			temp = new node(info);
			
			if (front == NULL){
				front = temp;
				rear = front;
				size++;
				cout << endl << info << " Enqueued !" << endl << endl;
				return;
			}
			
			
			rear->next = temp;
			rear = temp;
			size++;
			cout << endl << info << " Enqueued !" << endl << endl;
		}
		
		
		void DeQueue(){
			if(front == NULL){
				cout << endl << "Queue is Empty !" << endl;
				return;
			}
			
			temp = front;
			front = front->next;
			cout << endl << "Node " << temp->info << " DeQueued !" << endl;
			delete temp;
			size--;
			temp = NULL;
			
		}
		
		int peek(){
			if(front == NULL){
				return -1;
			}
			return front->info;
		}
		
		void print(){
			if(front == NULL){
				cout << endl << "Queue is Empty !" << endl << endl;
				return;
			}
			
			temp = front;
			cout << endl << "Queue is: ";
			while(temp != NULL){
				cout << temp->info << " ";
				temp = temp->next;
			}
			
			cout << endl << endl;
		}
};

int main(){
	
	Queue object;
	
	int option;
	int info;
	
	do{
		cout << "1. Enqueu" << endl;
		cout << "2. Queue" << endl;
		cout << "3. Peek" << endl;
		cout << "4. Print" << endl;
		cout << "5. Size of Queue" << endl;
		cout << "0. Exit" << endl;
		cout << endl << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			cout << endl << "Enter Info: ";
			cin >> info;
			object.EnQueue(info);
		} else if(option == 2){
			object.DeQueue();
		} else if(option == 3){
			info = object.peek();
			if(info == -1){
				cout << endl << "Queue is Empty !" << endl << endl;
			} else {
				cout << endl << "Front of Queue is: " << info << endl << endl;
			}
		} else if(option == 4){
			object.print();
		} else if(option == 5){
			cout << endl << "Size of Queue is: " << object.size << endl << endl;
		} else if(option == 0){
			cout << endl << "Program is Exiting . . ." << endl << endl;
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	
	return 0;
	
}