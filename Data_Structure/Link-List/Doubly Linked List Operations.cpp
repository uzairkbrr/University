#include <iostream>
using namespace std;


struct node{
	int info;
	node* next;
	node* prev;
	
	node(int info){
		this->info = info;
		this->next = NULL;
		this->prev = NULL;
	}
};


class DLL{
	private:
		node* head;
		node* temp;
		
	public:
		DLL(){
			this->head = NULL;
			this->temp = NULL; 
		}
		
		
		void add(int info){
			if(head == NULL){
				head = new node(info);
				cout << endl << "Node Added !" << endl << endl;
				return;
			}
			
			
			temp = head;
			
			while(temp->next != NULL){
				temp = temp->next; 
			}
			
			
			temp->next = new node(info);
			temp->next->prev = temp;
			cout << endl << "Node Added !" << endl << endl;
			
			return;
		}
		
		
		void remove(int info){
			if(head == NULL){
				cout << endl << "Doubly Link List is Empty !" << endl << endl;
				return;
			}
			
			if(head->info == info){
				node* toDelete = head;
				head = head->next;
				delete toDelete;
				toDelete = NULL;
				cout << endl << "Node Deleted !" << endl << endl;
				return;
			}
			
			temp = head;
			
			while(temp->next != NULL){
				if(temp->next->info == info){
					temp->next = temp->next->next;
					delete temp->next->prev;
					temp->next->prev = temp;
					cout << endl << "Node Deleted !" << endl << endl;
					return;
				}	
				
				temp = temp->next;
			}
			
			cout << endl << "Info Not Found in the Doubly Link List !" << endl << endl;
			
		}
		
		
		void update(int info){
			if(head == NULL){
				cout << endl << "Doubly Link List is Empty !" << endl << endl;
				return;
			}
			
			
			temp = head;
			while(temp != NULL){
				if(temp->info == info){
					int updatedInfo;
					cout << "Enter Updated Info: ";
					cin >> updatedInfo;
					temp->info = updatedInfo;
					cout << endl << "Info Updated ! " << endl << endl;
					return;
				}
				
				temp = temp->next;
			}
			
			
			cout << endl << "Info Not Found In the Doubly Link List !" << endl << endl;
		}
		
		
		int length(){
			if(head == NULL){
				cout << endl << "Doubly Link List is Empty !" << endl << endl;
				return -1;
			}
			
			temp = head;
			int count = 0;
			
			while(temp != NULL){
				count++;
				temp = temp->next;
			}
			
			return count;
			
		}
		
		
		void print(){
			if(head == NULL){
				cout << endl << "Doubly Link List is Empty !" << endl << endl;
				return; 
			}
			
			temp = head;
			cout << endl << "Doubly Link List is: ";
			while(temp != NULL){
				cout << temp->info << " ";
				temp = temp->next; 
			}
			
			cout << endl << endl;
		
		}
		
		
	
};

int main(){
	
	DLL object;
	
	int option;
	int info;
	
	do{
		cout << "1. Add" << endl;
		cout << "2. Remove" << endl;
		cout << "3. Update" << endl;
		cout << "4. Print" << endl;
		cout << "5. Length of Doubly Link List" << endl;
		cout << "0. Exit" << endl;
		cout << endl << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			cout << endl << "Enter Info: ";
			cin >> info;
			object.add(info);
		} else if(option == 2){
			cout << endl << "Enter Info to Delete: ";
			cin >> info;
			object.remove(info);
		} else if(option == 3){
			cout << endl << "Enter Info to Update: ";
			cin >> info;
			object.update(info);
		} else if(option == 4){
			object.print();
		} else if(option == 5){
			info = object.length();
			if(info != -1){
				cout << endl << "Size of Link List is: " << info << endl << endl;
			}
		} else if(option == 0){
			cout << endl << "Program is Exiting . . ." << endl << endl;
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	
	
	return 0;
}