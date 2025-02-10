#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
	public:
	    string name;
	    float merit;
	    Node* next;
	
	    Node(string name, float merit){
	    	this->name = name;
	    	this->merit = merit;
	    	this->next = NULL;
		}
};

class Queue{
	private:
	    Node* front;
	    Node* rear;
	    int size;
	
	public:
	    Queue(){
	    	this->front = NULL;
	    	this->rear = NULL;
	    	this->size = 0;
		}
	    
	    
	    void enqueue(string name, float merit){
	    	
	        Node* newNode = new Node(name, merit);
	
	        if (isEmpty()){
	            front = rear = newNode;
	        } else {
	            rear->next = newNode;
	            rear = newNode;
	        }
	
	        size++;
	    }
	
	
	    void dequeue(){
	        if (isEmpty()){
	            cout << "Queue is empty. Cannot dequeue." << endl;
	        } else {
	            Node* temp = front;
	            front = front->next;
	            delete temp;
	            size--;
	
	            if (isEmpty()){
	                rear = NULL;
	            }
	        }
	    }
	
	
	    bool isEmpty(){
	    	if(front == NULL){
	    		return true;
			} else {
	        	return false;
			}
	    }
	
	
	    Node* getFront(){
	        if (!isEmpty()){
	        	Node* newNode = new Node(front->name, front->merit); 
	            return newNode;
	        } else {
	            return NULL;
	        }
	        
	        return NULL;
	    }
	
	    int getSize(){
	        return size;
	    }
	};
	
	//	to find shortest Queue ,Shortest mean small in size;
	// 	send all queues as a parameter in array, compare their size & return the index of shortest one.
	int findShortestQueue(Queue queues[]){
	    int shortestQueue = 0;
	
	    for (int i = 0; i < 3; ++i){
	        if (queues[i].getSize() < queues[shortestQueue].getSize()){
	            shortestQueue = i;
	        }
	    }
	
	    return shortestQueue;
	}

int main(){

    Queue admissionQueues[3];
	string name;
    float merit;
    int queueNumber;
    int option;
	
	do {
        cout << endl << "1. Add Student to Queue" << endl;
        cout << "2. Process Admissions" << endl;
        cout << "3. Check Queue Status" << endl;
        cout << "4. See who is next" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> option;
        cout << endl;
		
		if(option == 1){
            cout << "Enter student name: ";
            fflush(stdin);
            getline(cin, name);
            cout << "Enter student merit: ";
            cin >> merit;

            int shortestQueue = findShortestQueue(admissionQueues);

            // if all queues all of the same size than select randomly
            if (admissionQueues[0].getSize() == admissionQueues[1].getSize() && admissionQueues[1].getSize() == admissionQueues[2].getSize()){
                shortestQueue = rand() % 3;
            }

            
            admissionQueues[shortestQueue].enqueue(name, merit);
            
            cout << "Student added to Queue " << shortestQueue + 1 << endl;
		} 
		else if(option == 2){
			
			for (int i = 0; i < 3; ++i){
            
				
				if(admissionQueues[i].getSize() > 0){
					
					cout << "Processing Queue " << i + 1 << ":" << endl;
					
					// Print Students till the Queue is not empty;
					while (!admissionQueues[i].isEmpty()){
                   
					    Node* currentStudent = admissionQueues[i].getFront();
					    
	                    cout << "Processing " << currentStudent->name << "'s admission... ";
	            
				        if (currentStudent->merit > 50){
				        	cout << endl << "Merit of " << currentStudent->name << " is greater than 50" << endl;
	                        cout << "Admitted!" << endl;
	                    } else {
				        	cout << endl << "Merit of " << currentStudent->name << " is lesser than 50" << endl;
	                        cout << "Not admitted!" << endl;
	                    }
	            
            			// delete / dequeue after admission process Done.
		            	admissionQueues[i].dequeue();
                	
					}
					
				} else {
					cout << "Queue " << i + 1 << " is Empty" << endl;
				}
                
            }
			
		} else if(choice == 3){
			
			cout << "Queue Status:" << endl;
            
			for (int i = 0; i < 3; ++i){
                cout << "Queue " << i + 1 << ": " << admissionQueues[i].getSize() << " students" << endl << endl;    
            }
		
		} else if(choice == 4){
		
            cout << "Enter the queue number: ";
            cin >> queueNumber;

            if (queueNumber >= 1 && queueNumber <= 3) {
            	
                Node* nextStudent = admissionQueues[queueNumber - 1].getFront();
                
                if(nextStudent != NULL){
                	cout << "Next student in Queue " << queueNumber << ": " << nextStudent->name << endl;
				} else {
					cout << endl << "Queue is Empty" << endl;
				}
                
                
           	} else {
                cout << "Invalid Queue number." << endl;
           	}
			
		}
		 else if(choice == 0){
			cout << endl <<"Exiting . . ." << endl;
			break;
		} else {
			cout << "Invalid Choice." << endl;
        }
        
    } while (choice != 0);

    return 0;
}
