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
		int visitor;
		
	public:
		
		queue(){
			this->head = NULL;
			this->tail = NULL;
			this->newNode = NULL;
			this->current = NULL;
			this->visitor = -1;	
		}
		
		void enQueue(string name){
			
			if(head == NULL){
				head = new node(name);
				tail = head;
				visitor++;
				return;
			}
			
			newNode = new node(name);
			tail->next = newNode;
			tail = newNode;
			visitor++;

		}		
		
		void deQueue(){
			
			if(head == NULL){
				cout << endl << "NoMore Visitor in the Queue." << endl << endl;
				return ;
			}
			
			current = head;
			head = head->next;
			
			delete current;
			current = NULL;
			visitor--;
		}
		
		int getNoOfVisitor(){
			return visitor;	
		}
		
		string getCurrentVisitor(){
			return head->name;
		}
		
		void process(){
			current = head;
			
			while(current != NULL){
				cout << "Visitor " << current->name << " is Now Enjoying." << endl;
				current = current->next;
			}
			
			cout << endl;
			
		}
};


int main(){
	
	int option, ticketToSell = 0, toProcess = 0, rc = 0 , mr = 0, rw = 0;
	queue ticket;
	queue rollerCoaster;
	queue motionRide;
	queue roundWheel;
	
	do{
		cout << "1. Enter Visitor in Ticket Purchase Queue." << endl;
		cout << "2. Sell a Ticket." << endl;
		cout << "3. Process all Queues." << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			
			string name;
			cout << endl << "Enter Name: ";
			fflush(stdin);
			getline(cin, name);
			
			ticket.enQueue(name);
			ticketToSell++;
			cout << endl;
			
		} else if(option == 2){
			
			if(ticketToSell != 0){
					
				
				int choice;
				string visitor = ticket.getCurrentVisitor(); 
				
				if(ticket.getNoOfVisitor() != -1){
					ticket.deQueue();
				} else if(ticket.getNoOfVisitor() == -1) {
					cout << endl << "Ticket Queue is Empty !" << endl << endl;
					break;
				}

				cout << endl << "Selling Ticket to : " << visitor << endl << endl;
				
				cout << "Which attraction ticket " << visitor << " want ?" << endl;
				cout << "1. Roller Coaster" << endl;
				cout << "2. Motion Ride" << endl;
				cout << "3. Round Wheel" << endl << endl;
				cout << "Enter Your Choice: ";
				cin >> choice;
				
				toProcess++;
				ticketToSell--;
				if(choice == 1){
					rollerCoaster.enQueue(visitor);
					rc++;
					cout << "Roller Coaster Ticket Sold to " << visitor << endl << endl;
 				} else if(choice == 2){
					motionRide.enQueue(visitor);
					mr++;
					cout << "Motion Ride Ticket Sold to " << visitor << endl << endl;
				} else if(choice == 3){
					roundWheel.enQueue(visitor);
					rw++;
					cout << "Round Wheel Ticket Sold to " << visitor << endl << endl;
				} else {
					cout << endl << "This Attraction is not Available" << endl << endl;
				}
				
				
				} else {
					cout << endl << "No Visitor Available" << endl << endl;
				}
				
		} else if(option == 3){
			
			if(toProcess != 0){
				if(rc != 0){	
					cout << endl << "Roller Coaster is Going to Start !" << endl;
					rollerCoaster.process();
				}
				
				if(mr != 0){
					cout << endl << "Motion Ride is Going to Start !" << endl;
					motionRide.process();
				}
				
				if(rw != 0){
					cout << endl << "Round Wheel is Going to Start !" << endl;
					roundWheel.process();
				}
				
				
				option = 0;
			} else {
				cout << endl << "No One Is Ready to Enjoy" << endl << endl;
			}
			
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	return 0;
}
