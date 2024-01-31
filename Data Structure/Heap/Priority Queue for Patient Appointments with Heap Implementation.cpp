#include <iostream>
#include <vector>
using namespace std;

class Patient {
public:
    string name;
    int urgency;

    Patient(string name, int urgency) {
        this->name = name;
        this->urgency = urgency;
    }
};

class Heap {
public:
    vector<Patient> htree;

    int getParent(int child) {
        if (child > 0) {
            return (child - 1) / 2;
        } else {
            return -1;
        }
    }

    int getLeft(int parent) {
        if (parent * 2 + 1 < htree.size()) {
            return (parent * 2) + 1;
        } else {
            return -1;
        }
    }

    int getRight(int parent) {
        if (parent * 2 + 2 < htree.size()) {
            return (parent * 2 + 2);
        } else {
            return -1;
        }
    }

    void swap(Patient *a, Patient *b) {
        Patient temp = *a;
        *a = *b;
        *b = temp;
    }

    void heapifyUp(int node) {
        if (node == 0) {
            return;
        }

        // if child is less than parent element then do swapping
        if (htree[getParent(node)].urgency > htree[node].urgency) {
            swap(&htree[node], &htree[getParent(node)]);
        }

        // recursive call for the previous or parent element of the current node
        heapifyUp(getParent(node));
    }

    void heapifyDown(int node) {
        if (node >= htree.size()) {
            return;
        }

        int left = getLeft(node);
        int right = getRight(node);
        // Initialize the smallest index with the current node
        int smallest = node;

		// compare left & right value, and update accordingly.
        if (left < htree.size() && htree[left].urgency < htree[smallest].urgency) {
            smallest = left;
        }
		
        if (right < htree.size() && htree[right].urgency < htree[smallest].urgency) {
            smallest = right;
        }

		// if smallest / current value or element is updated than do this
        if (smallest != node) {
            swap(&htree[node], &htree[smallest]);
            heapifyDown(smallest);
        }
    }

    void insert(Patient patient) {
        htree.push_back(patient);
        heapifyUp(htree.size() - 1);
    }

    void del() {
        if (htree.empty()) {
            cout << "No appointments to delete." << endl;
            return;
        }

        swap(&htree[htree.size() - 1], &htree[0]);

        cout << endl
             << htree[htree.size() - 1].name << " is with Doctor !" << endl
             << endl;
        htree.pop_back();

        heapifyDown(0);
    }

    void updateUrgency(string patientName, int newUrgency) {
        int patient = 0;

        for (int i = 0; i < htree.size(); i++) {
            if (htree[i].name == patientName) {
                cout << endl << "Urgency Level of " << htree[i].name << " is Updated !" << endl << endl;
                htree[i].urgency = newUrgency;
//				1. Use both heapifyUp() & heapifyDown() from current index
//				2. Use only heapifyUp(), & balance whole HEAP
                heapifyUp(htree.size() - 1); // Balance HEAP from BOTTOM to TOP.
            } else {
                patient++;
            }
        }

        if (patient == htree.size()) {
            cout << endl
                 << "Patient Not Found !" << endl
                 << endl;
        }
    }

    void display() {
        if (htree.empty()) {
            cout << "No appointments to display." << endl;
            return;
        }

        cout << "Current Appointments:" << endl;

        for (int i = 0; i < htree.size(); i++) {
            cout << "Name: " << htree[i].name << ", Urgency: " << htree[i].urgency << endl;
        }
    }
};

int main() {
	
    Heap priorityQueue;
	string name;
    int urgency;
    int choice;
    
    do {
        cout << endl << "1. Add New Patient" << endl;
        cout << "2. Display appointments" << endl;
        cout << "3. Send next patient to the doctor" << endl;
        cout << "4. Update urgency level" << endl;
        cout << "0. Exit" << endl << endl;
        cout << "Your choice -> ";
        cin >> choice;
        cout << endl;

		if(choice == 1){
			
            cout << "Enter Patient name: ";
            cin >> name;
            cout << "Enter Urgency level: ";
            cin >> urgency;
            
            // first create an Object of Patient class
			Patient p(name, urgency);
            
            // add Patient into the HEAP
            priorityQueue.insert(p);
            
		} else if(choice == 2){
			
			priorityQueue.display();
			
		} else if(choice == 3){
			
			 priorityQueue.del();
			 
		} else if(choice == 4){
			
            cout << "Enter patient name to update urgency: ";
            cin >> name;
            cout << "Enter new urgency level: ";
            cin >> urgency; // new urgency
            priorityQueue.updateUrgency(name, urgency);	
            
		} else if(choice == 0){
			
			cout << "Exiting . . ." << endl << endl;
			break;
			
		} else {
			cout << endl << "Invalid Input !" << endl << endl;
		}
       	
    } while (choice != 0);

    return 0;
}
