// Author: Uzair Ahmad
#include <iostream>
using namespace std;

struct node{
	string description;
	bool completedFlag;
	node *next;
	node *prev;
	
	node(){
		next = NULL;
		prev = NULL;
		completedFlag = false;
	}
};

class ToDoList{
	private:
		node *head;
		node *current;
		node *newNode;
		int length;
		int completedTask = 0;
		
	public:
		ToDoList(){
			head = NULL;
			current = NULL;
			newNode = NULL;
		}
		
		void add(string description){
			
			if(head == NULL){
				head = new node;
				head->description = description;
				head->next = NULL;
				length++;
				cout << endl << "Task Added in ToDo List " << endl << endl;
				return;
			}
			
			int priority;
			cout << endl << "1. Insert at Start" << endl;
			cout << "2. Insert Between Somewhere" << endl;
			cout << "3. Insert at End " << endl << endl;
			cout << "Your Option => " ;
			cin >> priority;
			
			if(priority == 1){
				// at the start
				newNode = new node;
				newNode->description = description;
				newNode->next = head;
				newNode->prev = NULL;
				head->prev = newNode;
				head = newNode;
				length++;
				cout << endl << "Task Added at the Start of ToDo List " << endl << endl;
				return;
			}
			
						    
			if (priority == 2) {
				
				print();
			    
				int position;
			    cout << endl << "Enter the Position after which you want to add the ToDo: ";
			    cin >> position;

				current = head;
				
				int i = 1;
			    while (current != NULL) {
			        // between
			        if (i == position) {
			            newNode = new node;
			            newNode->description = description;
			            newNode->next = current->next; 
			            newNode->prev = current; 
			            current->next = newNode; 
			            if (newNode->next != NULL) {
			                newNode->next->prev = newNode; 
			            }
			            length++;
			            cout << endl << "Task added after " << position << " Position" << endl << endl;	
			        }
			        current = current->next; 
			        i++;
			    }
			} else if(priority == 3){
				
				// at the end
				current = head;
				
				while(current->next != NULL){
					current = current->next;
				}
				
				newNode = new node;
				newNode->description = description;
				current->next = newNode;
				newNode->prev = current;
				length++;
				cout << endl << "Task Added at the End of ToDo List " << endl << endl;
				return;
			}			
		}
		
		void removeCompletedTask(){
   			
			if (completedTask == 0) {
        		cout << endl << "Completed Task Not Found " << endl << endl;
    	    	return;
    		}

	   
	    	current = head;
	
	    	while (current != NULL) {
			
	        	if (current->completedFlag) {
	           	 // If the first element is completed
	           		if (current == head) {
	                	head = head->next;
	                	
	                	if (head != NULL) {
	               	    	head->prev = NULL;
	                	}
	            	} else {
	                	current->prev->next = current->next;
	                	if (current->next != NULL) {
	                 	   current->next->prev = current->prev;
	                	}
	            	}
	            delete current;
	            completedTask--;
	            length--;
	        }
	
	        current = current->next; 
	    	}
	    	
	    	cout << endl << "All the Completed Task has been Removed" << endl << endl;
		}

		
		void completed(){
			print();
			
			if(head == NULL){
				cout << endl << "Nothing to Mark as Completed" << endl << endl;
				return;
			}
			
			int position;
			cout << endl << "Enter the Position => ";
			cin >> position;
			
			current = head;
			
			for(int i=1; i<position; i++){
				current = current->next;
			}
			
			current->completedFlag = true;
			cout << endl << "Task Marked as Completed" << endl << endl;
			completedTask++;
		}
		
		void print(){
			
			if(head == NULL){
				cout << endl << "Nothing to Print" << endl << endl;
				return;
			}

			current = head;
						
			cout << endl << "Your ToDo List is as Follow:- " << endl << endl;
			
			int number = 1;
			while(current != NULL){
				if(current->completedFlag){
					cout << number << ". " << current->description << "  -  " << "Completed" << endl;
				} else{
					cout << number << ". " << current->description << "  -  " << "InCompleted" << endl;
				} 
				current = current->next;
				number++;
			}
		}
		
		void printByOption(){
			
			if(head == NULL){
				cout << endl << "Nothing to Print" << endl << endl;
				return;
			}
			
			current = head;
			
			int option, number;
			cout << endl << "1. Ascending Order " << endl;
			cout << "2. Descending Order" << endl << endl;
			cout << "Your Option => ";
			cin >> option;
			
			cout << endl << "Your ToDo List is as Follow:- " << endl << endl;
			if(option == 1){
				while(current->next != NULL){
					current = current->next;
				}
				
				number = 1;
				while(current != NULL){
					
					if(current->completedFlag){
						cout << number << ". " << current->description << "  -  " << "Completed" << endl;
					} else{
						cout << number << ". " << current->description << "  -  " << "InCompleted" << endl;
					} 
				
					current = current->prev;
				}
			} else if(option == 2){

				
				number = 1;
				while(current != NULL){
					if(current->completedFlag){
						cout << number << ". " << current->description << "  -  " << "Completed" << endl;
					} else{
						cout << number << ". " << current->description << "  -  " << "InCompleted" << endl;
					} 
					current = current->next;
				}
			}
		}
};
			
int main(){

	ToDoList l;
	int option;
	string ToDo;
	
	do{
		cout << "1. Add a Task" << endl;
		cout << "2. Mark a Task Completed" << endl;
		cout << "3. Remove Completed Tasks" << endl;
		cout << "4. Print ToDo List" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Enter Your Option => ";
		cin >> option;
		
		if(option == 1){
			cout << endl;
			cout << "Enter ToDo : ";
			fflush(stdin);
			getline(cin, ToDo);
			l.add(ToDo);
		} else if(option == 2){
			l.completed();
		} else if(option == 3){
			l.removeCompletedTask();
		} else if(option == 4){
			l.printByOption();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
		cout << endl;
		
	}while(option != 0);
	
	return 0;
}