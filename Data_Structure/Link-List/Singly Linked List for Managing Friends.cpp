#include <iostream>
#include <cstring>
using namespace std;

struct friends{
	string friendName;
	friends *next;
};

class FriendList{
	private:
		friends *head;
		friends *temp;
		friends *newNode;
	
	public:
		FriendList(){
			head = NULL;
			temp = NULL;
			newNode = NULL;
		}
		
	void add(){
		
		if(head == NULL){
			head = new friends;
			cout << "Enter Friend Name: ";
			fflush(stdin);
			getline(cin, head->friendName);
			head->next = NULL;
			return;
		}
		
		int option;
		cout << "1. After Any Name" << endl;
		cout << "2. At the End" << endl << endl;
		cout << "Your Option=> ";
		cin >> option;
		
		temp = head; 
		
		if(option == 1){
			string key;
			cout << "Enter the Name: ";
			fflush(stdin);
			getline(cin, key);
			
			while(temp != NULL){
				if(temp->friendName == key){
					newNode = new friends;
					cout << "Enter Name of New Friend: ";
					fflush(stdin);
					getline(cin, newNode->friendName);
					newNode->next = temp->next; 
					temp->next = newNode;
					return; 
				}
				temp = temp->next;
			}
		} else if(option == 2){
			
			while(temp != NULL){
				if(temp->next == NULL){
					newNode = new friends;
					cout << "Enter Name of New Friend: ";
					fflush(stdin);
					getline(cin, newNode->friendName);
					newNode->next = NULL;
					temp->next = newNode;
					return;					
				}
			}
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}		
		
		
	}
	
	void remove(){
		
		if(head != NULL){
		
			
			string key;
			cout << "Enter the Friend to Delete: ";
			fflush(stdin);
			getline(cin, key);
			
			if(head->friendName == key){
				temp = head;
				head = temp->next;
				delete temp;
				cout << endl << "Friend Removed From FriendList" << endl << endl;
				return;
			}
			
			temp = head;
			
			while(temp != NULL){
				if(temp->next->friendName == key){
					newNode = temp->next;
					temp->next = temp->next->next;
					delete newNode;
					cout << endl << "Friend Removed From FriendList" << endl << endl;
					return;
				}
				temp = temp->next;
			}
			
			cout << endl;
			
		} else {
			cout << endl << "Nothing to Delete " << endl << endl;
		}
	}
	
	void print(){
		
		if(head != NULL){
			temp = head;
			
			cout << endl << "Your Friend List is the Following." << endl << endl;
			int count = 1;
			while(temp != NULL){
				cout << count << ". " << temp->friendName << endl;
				count++;
				temp = temp->next;
			}
			cout << endl << endl;
		} else {
			cout << endl << "Nothing to Print" << endl << endl;
		}
	}
	
};

int main(){
	
	int option;
	FriendList fl;
	
	do{
		cout << endl << "1. Add" << endl ;
		cout << "2. Remove" << endl;
		cout << "3. Print" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option=> ";
		cin >> option;
		
		if(option == 1){
			fl.add();
		} else if(option == 2){
			fl.remove();
		} else if(option == 3){
			fl.print();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input" << endl << endl;
		}
		
		
	}while(option != 0);
	
	return 0;
}