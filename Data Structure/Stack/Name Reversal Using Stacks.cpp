#include <iostream>
using namespace std;

class Stack{
	private:
		char *name;
		int top;
		int size;
		
	public:

		Stack(int size){
			this->size = size;
			name = new char[size];
			top = -1;	
		}
		
		bool isEmpty(){
			if(top == -1){
				return true;
			} else {
				return false;
			}
		}
		
		bool isFull(){
			if(size == top){
				return true;
			} else {
				return false;
			}
		}
		
		void push(char character){
			if(!isFull()){
				top++;
				name[top] = character;
			}
		} 
		
		char pop(){
			if(!isEmpty()){
				char value = name[top];
				top--;
				return value;
			}
			return '\0';
		}
		
		void display(){
		
			for(int i=0; i<size; i++){
				cout << name[i] ;
			}
			cout << endl;
		}
		
};

int main(){
	
	string name;
	cout << "Enter your Name: ";
	fflush(stdin);
	getline(cin, name);
	
	int size = name.length();
	
	Stack Username(size);
	Stack reverse(size);
	
	// adding the name into the userName stack
	for(int i=0; i<size; i++){
		Username.push(name[i]);
	}
	
	// now adding the name into the second stack 
	// and the 1st element of this stack will be the last element of the first stack and so on. 
	for(int i=0; i<size; i++){
		reverse.push(Username.pop());
	}
	
	cout << endl << "You Entered: ";
	Username.display();
	cout << "Reversed: " ;
	reverse.display();
	
	return 0;
}