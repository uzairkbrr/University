#include <iostream>
using namespace std;


struct node {
	int info;
	node* next;
	node* prev;
	
	node(int info){
		this->info = info;
		this->next = NULL;
		this->prev = NULL;
	}
};

class DRL{
	public:
		node* head;
		node* temp;
		
		
	DRL(){
		this->head = NULL;
		this->temp = NULL;
	}
	
	
	void add(int info) {
	    node* newNode = new node(info);
	
	    if (head == NULL) {
	        head = newNode;
	        head->next = head;
	        head->prev = head;
		    cout << endl << "1st Node Added !" << endl << endl;
	        return;
	    } 
	    
		if(head->next == head){
	        newNode->next = head;
	        newNode->prev = head;
	        head->next = newNode;
	        head->prev = newNode;
		    cout << endl << "2nd Node Added !" << endl << endl;
	        return;
	    }
	
		temp = head;
		
		while(temp->next != head){
			temp = temp->next;
		}
		
		newNode->prev = temp;
		newNode->next = temp->next;
		temp->next->prev = newNode;
		temp->next = newNode;
		cout << endl << "Node Added !" << endl << endl;
	}
	
	int length(node* temp, int count){
		
		if(head == NULL){
			return -1;
		}
		
		if(temp->next == head){
			return count;
		}
		
		
		return length(temp->next, count+1);
	}
	


	void update(int oldInfo, int newInfo) {
        if (head == NULL) {
            cout << endl << "Doubly Ring List is Empty !" << endl << endl;
            return;
        }

        temp = head;
        do {
            if (temp->info == oldInfo) {
                temp->info = newInfo;
                cout << endl << "Info Updated !" << endl << endl;
                return;
            }

            temp = temp->next;
        } while (temp != head);

        cout << endl << "Info Not Found In the Doubly Ring List !" << endl << endl;
    }




	void remove(int info) {
        if (head == NULL) {
            cout << endl << "Doubly Ring List is Empty !" << endl << endl;
            return;
        }

        temp = head;
        do {
            if (temp->info == info) {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
                cout << endl << "Node Deleted !" << endl << endl;
                return;
            }

            temp = temp->next;
        } while (temp != head);

        cout << endl << "Info Not Found in the Doubly Ring List !" << endl << endl;
    }

	
	void print(){
		if(head == NULL){
			cout << endl << "Doubly Ring List is Empty !" << endl << endl;
			return;
		}
		
		temp = head;
		
		cout << endl << "The Doubly Ring List is: ";
		do{
			cout << temp->info << " ";
			temp = temp->next;
		}while(temp != head);
		
		cout << endl << endl;
	}
};

int main(){
	
	DRL object;
	
	int option;
	int info;
	
	do{
		cout << "1. Add" << endl;
		cout << "2. Remove" << endl;
		cout << "3. Update" << endl;
		cout << "4. Print" << endl;
		cout << "5. Length of Link List" << endl;
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
			int newInfo;
			cout << "Enter New Info: ";
			cin >> newInfo;
			object.update(info, newInfo);
		} else if(option == 4){
			object.print();
		} else if(option == 5){
			info = object.length(object.head,1);
			if(info != -1){
				cout << endl << "Size of Link List is: " << info << endl << endl;
			} else {
				cout << endl << "Doubly Ring List is Empty !" << endl << endl;
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