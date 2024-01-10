#include <iostream>
using namespace std;

class hospital{
	private:
		int size;
		int length;
		string *patients;

	public:
		hospital(int size){
			this->size = size;
			this->length = -1;
			patients = new string[size];
		}
		
		void enQueue(){
			
			if(length < size-1){
				string name;
				cout << endl << "Enter Name: ";
				fflush(stdin);
				getline(cin, name);
				length++;
				patients[length] = name;
				cout << endl;
			} else {
				cout << endl << "Quene is Full" << endl << endl;
			}
		}
		
		void deQueue(){
			if(length != -1){
				
				cout << endl << "Patient " << patients[0] << " is Now with Doctor."<<  endl << endl;
				
				for(int i=0; i<length; i++){
					patients[i] = patients[i+1];
				}
				length--;
				
			} else {
				cout << endl << "No More Patients." << endl << endl;
			}
		}
		
		void currentPatient(){
			if(length != -1){
				cout << endl << patients[0] << endl << endl;
			} else {
				cout << endl << "Queue is Empty" << endl << endl;
			}
		}
		
		void display(){
			if(length != -1){
				cout << endl;
				for(int i=0; i<=length; i++){
					cout << patients[i] << "   " ; 
				}
				cout << endl << endl;
			} else {
				cout << endl << "Patients is Not Available" << endl << endl;
			}
			
			
		}
};

int main(){
	
	int size, option;
	cout << "Enter Number of Seats in waiting area: ";
	cin >> size;
	
	hospital patients(size);
	
	do{
		cout << "1. Enter Patient in Waiting Queue" << endl;
		cout << "2. Send Next Patient to the Doctor" << endl;
		cout << "3. See Who's Next" << endl;
		cout << "4. Display All Patients in the Queue" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option: ";
		cin >> option; 
		
		if(option == 1){
			patients.enQueue();
		} else if(option == 2){
			patients.deQueue();
		} else if(option == 3){
			patients.currentPatient();
		} else if(option == 4){
			patients.display();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input" << endl << endl;
		}
		
	}while(option != 0);
	
	return 0;
}