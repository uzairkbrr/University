#include<iostream>
#include<string.h>

using namespace std;

struct Node{
	
	int info;
	Node* left;
	Node* right;
	int LTH;
	int RTH;
	
	Node(){
		left = NULL;
		right = NULL;
		LTH = 1;
		RTH = 1;
	}
};
	
	
class TBT{
	
	public:
		
	Node* root;
	Node* newNode;
	Node* parentNode;
	int  number;

	TBT(){
		root = new Node;
		root->info = -1;
		root->left = root;
		root->LTH = 0;
		root->right = root;
		root->RTH = 0;
		newNode = NULL;
		parentNode = NULL;
	}
	
	void insert(Node* temp){
		
		// Root / Dummy will holds maximum value in the tree
		if(root->info <= number){
			root->info = number + 1;
		}
		
		
		if(temp == root && root->left == root){
			
			newNode = new Node;
			newNode->info = number;
			
			newNode->left = root->left;
			newNode->LTH = 1;
			
			newNode->right = root;
			newNode->RTH = 1;
			
			root->left = newNode;
			root->LTH = 0;
			
			return;
		}
		
		
		if(number < temp->info && temp->LTH != 1){
			insert(temp->left);
		} else if(number == temp->info){
			cout<<"Can't Add A Duplicate" << endl << endl;
		} else if(number > temp->info && temp->RTH != 1){
			insert(temp->right);
			
		} else{
			if(number < temp->info){
				
				newNode = new Node;
				newNode->info = number;
				
				newNode->left = temp->left;
				newNode->LTH = 1;
				newNode->right = temp;
				newNode->RTH = 1;
				temp->left = newNode;
				
				temp->LTH = 0;
				
				
			}
			else{
				
				newNode = new Node;
				newNode->info = number;
				
				newNode->right = temp->right;
				newNode->RTH = 1;
				
				newNode->left = temp;
				newNode->LTH = 1;
				temp->right = newNode;
				
				temp->RTH = 0;
			}
		}	
	}
	
	
	Node* findSuccessor(Node* temp){
		while(temp->LTH != 1){ 
			temp = temp->left;
		}
		
		return temp;
	}
	
	
	Node* findDeccessor(Node* temp){
		while(temp->RTH != 1){
			temp = temp->right;
		}
		
		return temp;
	}
	
	
	Node* nextInOrder(Node* temp){
		if(temp->RTH == 1){
			return temp->right;
		}
		else{
			temp = temp->right;
			
			while(temp->LTH == 0 ){
				temp = temp->left;
			}
			
			return temp;
		}
	}
	
	void fastOrder(Node *temp){
		
		while((temp = nextInOrder(temp)) != root ){
			cout<<temp->info<<" ";
		}
		
		cout << endl << endl;
		
		return;
	}
	
	
	void toDelete(Node* temp){
		if(temp == root && root->left == root){
			cout << endl << "Tree is Empty !" << endl << endl;
			return;
		}
		
		if(number < temp->info && temp->LTH != 1){
			
			parentNode = temp;
			toDelete(temp->left);
			
		} else if(number > temp->info && temp->RTH != 1){
			
			parentNode = temp;
			toDelete(temp->right);
			
		} else if(temp->info == number){
			
			
			if(temp->left == root && temp->right == root){
				root->left = root;
				delete temp;	
			}
			
			// 1st element & only have left child
			else if(temp->right == root){
				root->left = temp->left;			
				newNode = findDeccessor(temp->left);
				newNode->right = root;				
				delete temp;
			}
			// 1st element & only have right child
			 else if(temp->left == root){
				root->left = temp->right;
				newNode = findSuccessor(temp->right);
				newNode->left = root; 
				delete temp;
			} 
			
			// leaf && minimum in the root 
			else if(temp->LTH == 1 && temp->RTH == 1 && temp->right == parentNode){
				cout << temp->info << " is Deleted from the left of 10" << endl ;
				cout << "Left of 10 is now attached with " <<  temp->left->info << endl;
				cout << "Right of 10 is now attached with " <<  parentNode->right->info << endl;
				parentNode->left = temp->left;
				delete temp;
			} 
			
			else if(temp->RTH == 1 && temp->LTH == 1 && temp->left == parentNode){
				
				cout << temp->info << " is Deleted from the right of 16" << endl ;
				cout << "Right of 16 is now attached with " <<  temp->right->info << endl;
				cout << "Left of 16 is now attached with " <<  parentNode->left->info << endl;
				parentNode->right = temp->right;
				delete temp;
				
			// 7
			} else if(temp->LTH == 1 && temp->RTH == 0 && temp->left == root){
				
				newNode = findSuccessor(temp->right);
				parentNode->left = temp->right;
				newNode->left = root;
				delete temp;
			
				// 8
			} else if(temp->LTH == 0 && temp->RTH == 1 && temp->right == root){
				
				newNode = findDeccessor(temp->left);
				parentNode->right = temp->left;
				newNode->right = root;
				delete temp;

			// 9
			}  else if(temp->RTH == 1 && temp->LTH == 0){
				
				parentNode->right = temp->left;
				temp->left->right = temp->right;
				delete temp;
			
			}
			// 1
			else if(temp->left == parentNode && temp->RTH == 0){ // 0 == child, 1 == thread
				
				temp->right->left = temp->left;
				parentNode->right = temp->right;
				delete temp;
						
				// 2 
			} else if(temp->right == parentNode && temp->LTH == 0){
				
				temp->left->right = temp->right;
				parentNode->left = temp->left;
				delete temp;		
						
			} else if(temp->left == root && temp->RTH == 1){
				
				parentNode->left = temp->left;
				delete temp;
			}
			
				// 3
			else if(temp->right == root && temp->LTH == 0){
				
				temp->left->right = root;
				parentNode->right = temp->left;
				delete temp;
			
			} 
				// 4
			else if(temp->left == root && temp->RTH == 0){
				
				temp->right->left = root;
				parentNode->left = temp->right;
				delete temp;
				
				
				// Node having 2 childs
				// 5 && 6
			} else if(temp->LTH == 0 && temp->RTH == 0){
				
				cout << "Deleting from both child wala if" << endl;
				newNode = findSuccessor(temp->right);
				temp->info = newNode->info;
				newNode->info = number;
				
			    parentNode = temp;
				toDelete(temp->right);

			} 
				// 10 
			 else if(temp->LTH == 1 && temp->RTH == 0){
				
				parentNode->left = temp->right;
				temp->right->left = temp->left;
				delete temp;
			}
				
			cout << endl;
				
		} else {
			cout << endl << "Info Not Found !" << endl << endl;
		}
	}
	

	void search(Node *temp){
		
		bool Found = false;
		
		while((temp = nextInOrder(temp)) != root ){
			if(temp->info == number){
				cout<<"Number "<<temp->info<<" Available In The Tree"<<endl<<endl;
				Found = true;
				break;
			}
		}
		
		if(!Found){
			cout<<"Info Not Found !"<<endl<<endl;
		}
	}
	
	void update(Node *temp, int updatedValue){
		
		bool Found = false;
		
		while((temp = nextInOrder(temp)) != root ){
			if(temp->info == number){
				temp->info = updatedValue;
				Found = true;
				cout << endl << "Info Upadated" << endl << endl;
				break;
			}
		}
		
		// if info not found
		if(!Found){
			cout<<"Info Not Found It Is Not In The Tree"<<endl<<endl;
		}
	}

	void findMax(Node *temp){
		
		if(root->left == root){
			cout<<"Tree is Empty !"<<endl<<endl;
			return;
		}
		
		temp = temp->left;
		// maximum is in the right most
		while(temp->RTH == 0){
			temp = temp->right;
		}
		
		cout << endl << "Maximum: "<<temp->info<<endl<<endl;
	}
	
	void findMin(Node *temp){
		
		if(root->left == root){
			cout<<"Tree is Empty !"<<endl<<endl;
			return;
		}
		
		temp = temp->left;
		// minimum is in the left most
		while(temp->LTH == 0){
			temp = temp->left;
		}
		
		cout << endl << "Minimum: "<<temp->info<<endl<<endl;
	}
};


int main(){
	
	TBT T;
	
	int option, info;
	
	do{
		cout << endl << "1. Insertion" << endl;
		cout << "2. In Order Traversal" << endl;
		cout << "3. Delete" << endl;
		cout << "4. Search" << endl;
		cout << "5. Maximum" << endl;
		cout << "6. Minimum" << endl;
		cout << "7. Update" << endl;
		cout << "0. Exit" << endl << endl;
		
		cout<<"Enter Your Option : ";
		cin>>option;
		
		if(option == 1){
			
			cout<<"Enter The Number To Add : ";
			cin>>T.number;
			T.insert(T.root);
			
		} else if(option == 2){
			
			T.fastOrder(T.root);
			
		} else if(option == 3){
			
			cout<<"Enter The Number That You Want To Delete : ";
			cin>>T.number;
			T.toDelete(T.root->left);

		} else if(option == 4){
			
			cout<<"Enter A Number That You Want To Find In The Tree : ";
			cin>>T.number;
			
			T.search(T.root);
			
		} else if(option == 5){
			
			T.findMax(T.root);
			
		} else if(option == 6){
			
			T.findMin(T.root);
			
		} else if(option == 7){
			
			cout<<"Enter Value to Update: ";
			cin>>T.number;
			
			cout<<"Enter Updated Value: ";
			cin>>info;
			
			T.update(T.root, info);	
		}
		else if(option == 0){
			break;
		}
		else{
			cout<<"Wrong Option "<<endl<<endl;
		}
		
	} while(option != 0);
	
	cout << endl << "Program Exited ! " << endl << endl;
	
	return 0;
	
}