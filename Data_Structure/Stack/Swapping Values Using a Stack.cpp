#include <iostream>
using namespace std;

struct node{

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
		int capacity;
		int length;
		
	public:
		Stack(int capacity){
			this->capacity = capacity;
			length = 0;
			newNode = NULL;
			top = NULL;
		}
		
		void push(int value){
			if(capacity == length){
				cout << endl << "Stack is Full " << endl << endl;
				return;
			}
			
			newNode = new node(value);
			newNode->next = top;
			top = newNode;			
		}
		
		int pop(){
			if(top == NULL){
				cout << endl << "Stack is Empty" << endl << endl;
				return -1;
			}
			
			newNode = top;
			top = top->next;
			
			int value = newNode->data;
			delete newNode;
			newNode = NULL;
			
			return value;
						
		}
	
};

int main(){
	
	int a,b;
	Stack s(2);
	
	cout << "Enter Value for A: ";
	cin >> a;
	
	s.push(a);
	
	cout << "Enter Value for B: ";
	cin >> b;
	
	s.push(b);
	
	cout << endl << "Before Swaping" << endl;
	cout << "--------" << endl;
	cout << " A : " << a << endl;
	cout << " B : " << b << endl;
	cout << "--------" << endl << endl;
	
	a = s.pop();
	b = s.pop();
	
	cout << endl << "After Swaping" << endl;
	cout << "--------" << endl;
	cout << " A: " << a << endl;
	cout << " B: " << b << endl;
	cout << "--------" << endl;
	
	
	return 0;
}