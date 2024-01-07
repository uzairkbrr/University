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

class RL{
	private:
		node* head;
		node* temp;
	public:
		
	RL(){
		this->head = NULL;
		this->temp = NULL;
	}
		
	void add(int info){
		if(head == NULL){
			head = new node(info);
			head->next = head;
			cout << endl << "Node Added !" << endl << endl;
			return;
		}
		
		if(head->next == head){
			head->next = new node(info);
			head->next->next = head;
			cout << endl << "Node Added !" << endl << endl;
			return;
		}
		
		temp = head;
		do{
			temp = temp->next;
		}while(temp->next != head);
		
		temp->next = new node(info);
		temp->next->next = head;
		cout << endl << "Node Added !" << endl << endl;
		
	}
	

	void remove(int info) {
	    if (head == NULL) {
	        cout << endl << "Ring List is Empty !" << endl << endl;
	        return;
	    }
	
	    if (head->info == info) {
	        if (head->next == head) {
	            // If there's only one node, delete it
	            delete head;
	            head = NULL;
	        } else {
	            // If there are multiple nodes, update the head and delete the node
	            temp = head->next;
	            while (temp->next != head) {
	                temp = temp->next;
	            }
	            temp->next = head->next;
	            delete head;
	            head = temp->next;
	        }
	
	        cout << endl << "Node Deleted !" << endl << endl;
	        return;
	    }
	
	    temp = head;
	    
	    do {
	        if (temp->next->info == info) {
	            node* toDelete = temp->next;
	            temp->next = toDelete->next;
	            delete toDelete;
	            cout << endl << "Node Deleted !" << endl << endl;
	            return;
	        }
	        temp = temp->next;
	    } while (temp != head);
	
	    cout << endl << "Node with info " << info << " not found!" << endl << endl;
	}

	
	void update(int info){
		if(head == NULL){
			cout << endl << "Ring List is Empty !" << endl << endl;
			return;
		}
		
		temp = head;
		do{
			if(temp->info == info){
				int updatedInfo;
				cout << endl << "Enter the Updated Info: ";
				cin >> updatedInfo;
				
				temp->info = updatedInfo;
				cout << endl << "Info Updated !" << endl << endl;
				return;
			}
			
			temp = temp->next;
		}while(temp != head);
		
	}
	
	
	int length(){
		if(head == NULL){
			cout << endl << "Ring List is Empty !" << endl << endl;
			return -1;
		}
		
		int count = 0;
		temp = head;
		
		do{
			count++;
			temp = temp->next;
		}while(temp != head);
		
		return count;
	}
	
	
	void search(int key){
		
		if(head == NULL){
			cout << endl << "Ring List is Empty !" << endl << endl;
			return;
		}
		
		
		node* slow = head;
		node* fast = head;
		
		while(true){
			slow = slow->next;
			fast = fast->next->next;
			
			if(fast == head || fast->next == head){
				break;
			}
		}
		
		temp = head;
		do{
			if(temp->info == key){
				if(temp <= slow){
					cout << endl << "First Half !" << endl << endl;
				} else {
					cout << endl << "Second Half !" << endl << endl;
				}
			}
			
			temp = temp->next;
		}while(temp != head);
	
		 
	}
	
	
	void print(){
		if(head == NULL){
			cout << endl << "Ring List is Empty ! " << endl << endl;
			return;
		}
		
		temp = head;
		cout << endl << "The Ring List is: ";
		
		do{
			cout << temp->info << " ";
			temp = temp->next;
		} while(temp != head);
		
		cout << endl << endl;
	}
};

int main(){
	
	
	RL object;
	
	int option;
	int info;
	
	do{
		cout << "1. Add" << endl;
		cout << "2. Remove" << endl;
		cout << "3. Update" << endl;
		cout << "4. Print" << endl;
		cout << "5. Search Info" << endl;
		cout << "6. Length of Link List" << endl;
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
			cout << endl << "Enter Info to Search: ";
			cin >> info;
			object.search(info);
			
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