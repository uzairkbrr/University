#include <iostream>
using namespace std;

class node{
	
	public:
		
		int data;
		node *next;	
		
		node(int data){
			this->data = data;
			this->next = NULL;	
		}
	
};

class Stack{
	private:
		node *top;
		node *newNode;
		int length;
		int capacity;
		
	public:
		Stack(int capacity){
			this->capacity = capacity;
			length = 0;
			top = NULL;
		}
		
		bool isEmpty(){
			if(top == NULL){
				return true;
			} else {
				return false;
			}
		}
		
		bool isFull(){
			if(length == capacity){
				return true;
			} else {
				return false;
			}
		}
		
		void push(int value){
			if(!isFull()){
				newNode = new node(value);
				newNode->next = top;
				top = newNode;
				length++;
			}
		}
		
		int pop(){
			
			if(!isEmpty()){	
				newNode = top;
				top = top->next;
				int value = newNode->data;
				
				delete newNode;
				newNode = NULL;
				return value;
			} 
		}
		
		void display(){
			
			if(!isEmpty()){
				cout << endl << "Stack elements : ";
				for(int i=1; i<length; i++){
					cout << pop() << " ";
				}
				
				cout << endl;
			}
		
		}
};


int main(){
	
	Stack s(5);
	s.push(2);
	s.push(5);
	s.push(3);
	s.push(4);
	s.display();
	
	return 0;
}