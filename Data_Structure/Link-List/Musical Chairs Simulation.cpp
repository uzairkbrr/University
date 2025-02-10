#include <iostream>
using namespace std;

struct node{
	string name;
	node *next;	
};

class chairGame{
	private:
		node *head;
		node *current;
		node *newNode;
		node *tail;
		int members;
		
	public:
		chairGame(int members){
			this->members = members;
			head = NULL;
			newNode = NULL;
			current = NULL;
			tail = NULL;
		}
		
void initializeMembers() {	
  
    if(head == NULL){
		head = new node;
		cout << "Enter Name for Student 1: ";
		fflush(stdin);
		getline(cin, head->name);
		head->next = head;
		tail = head;
	}
					
			current = head;
			
			for(int i=2; i<=members; i++){
				
				newNode = new node;
				current->next = newNode;
				newNode->next = head;
				string name;
				
				cout << "Enter Name for Student " << i << ": "; 
				fflush(stdin);
				getline(cin, name);
				
				newNode->name = name;
				tail = newNode;

				current = current->next;
			}
						
	    }	
    	
int playRound(int remove) {
    current = head;

    for (int i = 1; i <= members+members; i++) {
    	// when the index or the position is equal to remove (entered by user)
        if (i == remove) {
        	// when head is to be deleted
            if (current == head) {
                newNode = head;
                head = head->next;
                tail->next = head;
                members--;

           		cout << endl << " ->  " << newNode->name << " is Out of the Game" << endl << endl;
                cout << endl << "Remaining Players are as follows" << endl << endl;
                print();
                delete newNode;
                return 58; // return 58 means incomplete
            }

            newNode = current->next;
            current->next = current->next->next;
            if (newNode == head) {
                head = head->next;
            }
            members--;
            cout << endl << newNode->name << " is Out of the Game" << endl << endl;
            cout << endl << "Remaining Players are as follows" << endl << endl;
            print();
            delete newNode;
        }
        current = current->next;
    }

	// When last member is remaining 
    if (members == 1) {
        cout << " ->  " <<  head->name << " is Winner !" << endl << endl;
        return 85; // return 85 means Game is finished.
    }

    return 58;
}

		
void print(){
			
	current = head;
			
	for(int i=1; i<=members; i++){
		cout << " ->  " << current->name << endl;
		current = current->next;
	}
			
	cout << endl;
}
    	
};


int main(){
	
	int members, stopMusic;
	cout << "How Many Members: ";
	cin >> members;
	
	chairGame cg(members);
	cg.initializeMembers();	
	int option;
	
	do{
		cout << endl << "1. Play Round" << endl << endl;
		cout << "Your Option => ";
		cin >> option;
		
		if(option == 1){
			cout << endl << "After How many Steps You want to stop the Music: ";
			cin >> stopMusic;
			int result = cg.playRound(stopMusic);
			
			if(result == 85){
				option = 0;
			}
				
		} else {
			cout << endl << "Invalid Input " << endl << endl; 
		}
		
	}while(option != 0);
	
	
	return 0;
}