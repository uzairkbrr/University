#include <iostream>
using namespace std;

struct node{
	int info;
	node* left;
	node* right;
	
	node(int info){
		this->info = info;
		left = NULL;
		right = NULL;
	}
};

class Tree{
	private:
		node* root;
		node* newNode;
		int count;
		int middleInfo;
		
	public:
		Tree(){
			root = NULL;
			newNode = NULL;
			count = 0;
			middleInfo = 0;
		}
		
		void insert(node* temp, int info){
			
			if(temp == NULL){
				temp  = new node(info);
				root = temp;
				return;
			}
			
			if(info < temp->info){
				if(temp->left != NULL){
					insert(temp->left, info);
				} else {
					temp->left = new node(info);
					return;
				}
			} else if(info > temp->info){
				if(temp->right != NULL){
					insert(temp->right, info);
				} else {
					temp->right = new node(info);	
					return;
				}
			}
		}
	
	void inOrder(node*temp){
		if(temp == NULL){
			cout << endl << "Tree is Empty !" << endl << endl;
			return;
		}
		
		if(temp->left != NULL){
			inOrder(temp->left);
		}
		
		count++;

		if(count == middleInfo){
			cout << endl << "Middle Info is  " << temp->info << endl;
		}
		
		if(temp->right != NULL){
			inOrder(temp->right);
		}
	}
	
	void findMiddle(){
		
		inOrder(root);
		middleInfo = count / 2 + 1;
		count = 0;
		
		return;
	}
	
	node* getRoot(){
		return root;
	}
		
};

int main(){
	
	Tree t;
	
	int option;
	
	do{
		cout << endl << "1. Insert" << endl;
		cout << "2. Find Middle Info " << endl;
		cout << "0. Exit" << endl << endl;	
		cout << "Your Option: " ;
		cin >> option;
		
		if(option == 1){
			
			int info;
			cout << endl << "Enter Info: ";
			cin >> info;
			
			t.insert(t.getRoot(),info);
			
		} else if(option == 2){
			
			t.findMiddle();
			t.inOrder(t.getRoot());
			
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl;
		}
		
		
	}while(option != 0);
	
	
	return 0;
}