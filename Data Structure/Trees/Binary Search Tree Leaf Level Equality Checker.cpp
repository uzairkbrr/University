#include <iostream>
using namespace std;

struct node{
	int info;
	node* left;
	node* right;
	
	node(int info){
		this->info = info;
		this->left = NULL;
		this->right = NULL;
	}	
};


class Tree{
	public:
		node* root;
		int firstLeafHeight;
		int level;
		bool isFalse;
		bool firstLeaf;
		
		Tree(){
			root = NULL;
			firstLeafHeight = 0; // for storing the height / level of first leaf; then I will compare this value with all other leafs;
			level = 0;  // will keep track of every leaf;
			isFalse = true; // initialy I assume it is leafs are at same level;
			firstLeaf = true; // it mean first leaf;
		}		
		
		// insertion
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
		
		// function for checking, all leafs are at same level;
		void checkLeafHeight(node* temp){
			// if tree is empty;
			if(temp == NULL && root == NULL){
				cout << endl << "Tree is Empty" << endl << endl;
				return;
			}
			
			// storing height / Level of the first leaf;
			if(temp->left == NULL && temp->right == NULL && firstLeaf){
				firstLeafHeight = level;
				firstLeaf = false; // the first variable will now have value "false", which mean first leaf is found;
			}
			
			// now compare every leaf level with the first leaf level
			if(temp->left == NULL && temp->right == NULL && !firstLeaf){
				// if the first leaf level & new leaf level is not same then store false in "isFalse" variable;
				// isFalse variable will identify if all leafs on same level or not;
				if(firstLeafHeight != level){
					isFalse =  false;
				}
			}
			
			// go to left till not NULL && increase the ;
			if(temp->left != NULL){
				level++;
				checkLeafHeight(temp->left);
			}
			
			
			if(temp->right != NULL){
				level++;
				checkLeafHeight(temp->right);
			}
			
			// decrease the level / height when going back in the tree;
			level--;
		}
	
};


int main(){
	
	Tree T;
	int option, info;
	
	do{
		cout << endl << "1. insert" << endl;
		cout << "2. Check Leaf Level's" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option: ";
		cin >> option;
		
		if(option == 1){
			
			cout << endl << "Enter Info: ";
			cin >> info;
			
			T.insert(T.root, info);
			
		} else if(option == 2){
			
			// resetting all the variable for every call
			// The reason of the below line is "when user check multiple times at once."
			T.isFalse = true;
			T.firstLeafHeight = 0;
			T.level = 0;
			T.firstLeaf = true;
			
			T.checkLeafHeight(T.root);
			
			// if isFalse variable has value "false" && root is not NULL, mean something in tree;
			if(!T.isFalse && T.root != NULL){
				cout << endl << "Leafs are not on the same level" << endl << endl;
				
			// if isFalse is "true" && root is not NULL, which means there is some values in the tree.
			// isFalse will have value "true" whenever all the leafs are on the same level/height;
			} else if(T.isFalse && T.root != NULL){
				cout << endl << "Leafs are on the same level" << endl << endl;
			}
			
			
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	return 0;
}