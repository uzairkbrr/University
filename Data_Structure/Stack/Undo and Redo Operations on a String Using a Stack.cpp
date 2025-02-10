#include <iostream>
using namespace std;

class node{
	public:
		char word;
		node *next;
		
		node(char word){
			this->word = word;
			this->next = NULL;
		}	
};

class Stack{
	private:
		node *top;
		node *newNode;
		
	public:
		Stack(){
			top = NULL;
			newNode = NULL;
		}
		
		// To Add new Char in the stack (TOP)
		void push(char word){
			newNode = new node(word);	
			newNode->next = top;
			top = newNode;
		}
		
		// to remove the last Char from the stack (TOP node)
		char pop(){
			newNode = top;
			top = top->next;
			char value = newNode->word;
				
			delete newNode;
			newNode = NULL;
			return value;
		}
	
};

int main(){
	
	string name = "Uzair";
	Stack s;
	int option;
	
	cout << name << endl;
	
	do{
		cout << "1. Undo" << endl;
		cout << "2. Redo" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option: ";
		cin >> option;
		
		// I want to reach at the end of the string
		int i=0;
		while(name[i] != '\0'){
			i++;
		}
		
		// Now after the above while loop "i" is pointing or you can say that I can access the last Char of string using "i".
		
		if(option == 1){
			// check if the 1st element is not NULL character.
			// this condition will work if the name string is empty and user want to remove Char 
			if(name[0] != '\0'){
				s.push(name[i-1]);
				name[i-1] = '\0';
				cout << name << endl;
			} else {
				cout << endl << "Nothing to Undo" << endl << endl;
			}

		} else if(option == 2){
			// if user want to redo means to add the last removed element or Char into the name "string"
		
			name[i] = s.pop();
			cout << name << endl;
			// Now I'm checking if the name is again Completed doing push, pop then display the following messege to user and assign 0 to option; 
			if(name == "Uzair"){
				cout << endl << "Name is Completed Again" << endl;
				option = 0;
			}
		
		}
		// if the name is again completed doing push, pop then the option variable will have value of 0.
		// means the do while loop will be executed till the name is not completed 
	}while(option != 0);
	
	return 0;
}