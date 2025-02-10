
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
		int check;
		
	public:
		Tree(){
			root = NULL;
			newNode = NULL;
			check = 0;
		}
		
		void insert(node* temp, int info){
			
			if(root == NULL){
				root  = new node(info);
				check = 0;
				return;
			}
			
			if(check == 0){
				
				if(temp->right == NULL){
					temp->right = new node(info);
					return;
				} else {
					check = 1;
					insert(temp->right, info);
				}
				
			} else if(check == 1){
				
				if(temp->left == NULL){
					temp->left = new node(info);
					check = 0;
					return;
				} else {
					check = 0;
					insert(temp->left, info);
				}
			}
			
	}
	
	void preOrder(node*temp){
		if(temp == NULL){
			cout << endl << "Tree is Empty !" << endl << endl;
			return;
		}
		
		cout << temp->info << " ";
		
		if(temp->left != NULL){
			preOrder(temp->left);
		}
		
		if(temp->right != NULL){
			preOrder(temp->right);
		}
	}
	
	node* getRoot(){
		return root;
	}
		
};

int main(){
	
	
	Tree t;
	
	int option;
	
	do{
		cout << endl << "1. insert" << endl;
		cout << "2. preOrder " << endl;
		cout << "0. Exit" << endl << endl;	
		cout << "Your Option: " ;
		cin >> option;
		
		if(option == 1){
			
			int info;
			cout << endl << "Enter Info: ";
			cin >> info;
			
			t.insert(t.getRoot(),info);
			
		} else if(option == 2){
		
			t.preOrder(t.getRoot());
			
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl;
		}
		
		
	}while(option != 0);
	
	
	return 0;
}