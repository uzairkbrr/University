#include <iostream>
using namespace std;

class stack{
	int top;
	int size;
	int *arr;
	
	public:
		stack(int size){
			this->size = size;
			top = -1;
			arr = new int[size];
		}

		bool isEmpty(){
			if(top == -1){
				return true;
			} else{
				return false;
			}
		}
		
		bool isFull(){
			if(top == size-1){
				return true;
			} else {
				return false;
			}
		}
		
		void push(int value){
			if(!isFull()){
				top++;
				arr[top] = value;
			}
		}
		
		int pop(){
			if(!isEmpty()){
				int value = arr[top];
				top--;
				return value;
			} else {
				cout << endl << "Stack is Empty" << endl << endl;
			}
		}
		
		void peek(){
			cout << endl << "Top of the Stack is " << arr[top] << endl;
		}
		
		void display(){
			cout << endl << "Your Stack is ";
			for(int i=top ; i >= 0; i--){
				cout << arr[i] << " ";
			}
			
			cout << endl;
		}

};


int main(){
	
	stack s(5);
	
	s.push(2);
	s.display();
	
	s.push(6);
	s.display();
	
	s.push(7);
	s.display();
	
	s.pop();
	s.display();
	
	s.peek();
	s.display();
	
	return 0;
}