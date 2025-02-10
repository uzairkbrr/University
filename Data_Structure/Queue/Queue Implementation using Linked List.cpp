#include <iostream>
using namespace std;

struct node{
	string name;
	node *next;
	
	node(string name){
		this->name = name;
		this->next = NULL;
	}
};

class queue{
	private:
		node *head;
		node *tail;
		node *newNode;
		node *current;
		
	public:
		
		queue(){
			this->head = NULL;
			this->tail = NULL;
			this->newNode = NULL;
			this->current = NULL;	
		}
		
		void enQueue(){
			
			string name;
			cout << "Enter Name: ";
			fflush(stdin);
			getline(cin, name);
			
			if(head == NULL){
				head = new node(name);
				tail = head;
				cout << endl << "Node enQueued" << endl << endl;
				return;
			}
			
			newNode = new node(name);
			tail->next = newNode;
			tail = newNode;
			
			cout << endl << "Node enQueued" << endl << endl;
			
		}
		
		
		void deQueue(){
			
			if(head == NULL){
				cout << endl << "Nothing to deQueue" << endl << endl;
			}
			
			current = head;
			head = head->next;
			
			delete current;
			current = NULL;
			
			cout << endl << "Node DeQueued" << endl << endl;
		}
		
		void print(){
			
			if(head == NULL){
				cout << endl << "Nothing to Print" << endl << endl;
				return;
			}
			
			current = head;
			while(current != NULL){
				cout << current->name << " " ;
				current = current->next;
			}
			
			cout << endl << endl;
		}
	
};


int main(){
	
	int option;
	queue line;
	
	do{
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Print" << endl << endl;
		cout << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			line.enQueue();
		} else if(option == 2){
			line.deQueue();	
		} else if(option == 3){
			line.print();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	return 0;
}