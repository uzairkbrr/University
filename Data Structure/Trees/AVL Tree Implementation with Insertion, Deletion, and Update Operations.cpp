#include <iostream>
using namespace std;
	
struct node{
    int info;
    node *left;
	node *right;
	   
// constructor
	node(int info){
    	this->info = info;
        this->left = NULL;
		this->right = NULL;
	}
};
	
class tree{
    private:
        node *root;
        node *temp;
        node *rotatePtr;
        node *shiftPtr;
        int globalHeight;
	        
    public:
        tree(){
            root = NULL;
            temp = NULL;
	        rotatePtr = NULL;
    	    shiftPtr = NULL;
        	this->globalHeight = 0;
		}
	        
	    node* insert(node *temp, int info){
	        // first node;
	        if(root == NULL){
	            temp = new node(info);
	            root = temp;
	            return temp;
	        }
	            
	        // checking if Duplicate
	   	    if(info == temp->info){
	        cout << "This Value is already Exist" << endl;
	        }
	            
	            if(info < temp->info){
	                if(temp->left != NULL){
	                    temp->left = insert(temp->left, info);
	                } else {
	                    temp->left = new node(info);
	                }
	            } else if(info > temp->info){
	                if(temp->right != NULL){
	                   temp->right = insert(temp->right, info);
	                } else {
	                    temp->right = new node(info);
	                }
	            }

	            int balanceFactor = balanceFactorFun(temp);
	            
	            if(balanceFactor == 2){
	            
					if(temp->left->info < info){
						temp->left  = rotateLeft(temp->left);
						temp = rotateRight(temp);	
					} else {
						temp = rotateRight(temp);
					}	
					
		           	// if the root node is updated or having balanceFactor of 2
				} else if(balanceFactor == -2){
					
					if(temp->right->info > info){
						temp->right = rotateRight(temp->right);
						temp = rotateLeft(temp);
					} else {
						temp = rotateLeft(temp);
					}
				}
				return temp;
	    	}
	        
	    
	    node* Remove(node *temp, int info){
	    	    if(root == NULL){
	                cout << "Tree is empty ! ! !" << endl;
	                return NULL;
	            }
	            
	            if(temp == NULL){
	                cout << "This info is not available in the Tree ! ! !" << endl;
	                return NULL;
	            }
	            
	            // searching for the node
	            if(info < temp->info){
	                temp->left = Remove(temp->left, info);
	            }
	            if(info > temp->info){
	                temp->right = Remove(temp->right, info);
	            }
	            
	            // when find the node 
	            if(info == temp->info){
	                // case 1
	                if(temp->left == NULL && temp->right == NULL){
	                	if(temp == root){
	                        root = NULL;
	                    }
	                    delete temp;
	                    temp = NULL;
	                } 
	                // case 2
	                else if(temp->left != NULL & temp->right == NULL){
	                    node *toDelete = temp;
	                    temp = temp->left;
	                    delete toDelete;
	                    toDelete = NULL;
	                }
	                // case 3
	                else if(temp->left == NULL && temp->right != NULL){
	                    node *toDelete = temp;
	                    temp = temp->right;
	                    delete toDelete;
	                    toDelete = NULL;
	                }
	                // case 4
	                else if(temp->left != NULL && temp->right != NULL){
	                    // either find maximum or minimum
	                    // I'll find minimum in this condition
	                    node *minimumNode = findMinimum(temp->right);
	                    temp->info = minimumNode->info;
	                    temp->right = Remove(temp->right, minimumNode->info);
	                }
	            }
	            
	            if(temp == NULL){
	            	return NULL;
				}
	            
	            int balanceFactor = balanceFactorFun(temp);
	            
	            if(balanceFactor == 2){
	            	if(info < temp->left->info){
	            		return rotateRight(temp);
					} else {
						if(temp->left->right != NULL){
							temp->left = rotateLeft(temp->left);
						}
						
						return rotateRight(temp);
					}
					
					
				} else if(balanceFactor == -2){
					if(info > temp->right->info){
						return rotateLeft(temp);
					} else {
						 if(temp->right->left != NULL){
							temp->right = rotateRight(temp->right);
						}
					
						return rotateLeft(temp);
					}
				}
				
	            return temp;   
	        }
	        
	        node *rotateRight(node *temp){
	        	rotatePtr = temp->left;
				shiftPtr = rotatePtr->right;
				// changing
				rotatePtr->right = temp;
				temp->left = shiftPtr;
				
				if(temp == root){
		           	root = rotatePtr;
				}
			
	        	cout << "Rotating Right to Balance the Tree ! ! !" << endl;
				return rotatePtr;	
			}
			
			node *rotateLeft(node *temp){
				rotatePtr = temp->right;
				shiftPtr = rotatePtr->left;
				// changing
				rotatePtr->left = temp;
				temp->right = shiftPtr;
				
				if(temp == root){
					root = rotatePtr;
				}
				
	        	cout << "Rotating Left to Balance the Tree ! ! !" << endl;
				return rotatePtr;
			}
	        
	        void heightFun(node *temp, int localHeight){
	 
	 			if(temp == NULL){
	 				return;
				 }
				 
				if(temp->left != NULL){
					heightFun(temp->left, localHeight + 1);
				}
				
				if(localHeight > globalHeight){
					globalHeight = localHeight;
				}
				
				if(temp->right != NULL){
					heightFun(temp->right, localHeight + 1);
				}			
			}
	        
	        void preOrder(node *temp){
	            if(temp == NULL){
	                cout << "Tree is empty" << endl;
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
	        
	         void inOrder(node *temp){
	            if(root == NULL){
	                cout << "Tree is empty" << endl;
	                return;
	            }
	            
	            if(temp->left != NULL){
	                inOrder(temp->left);
	            }
	            
	            cout << temp->info << " ";
	            
	            if(temp->right != NULL){
	                inOrder(temp->right);
	            }
	        }
	    
	        node *findMinimum(node *temp){
	            while(temp->left != NULL){
	                temp = temp->left;
	            }
	            return temp;
	        }
	        
	        node *findMaximum(node *temp){
	            while(temp->right != NULL){
	                temp = temp->right;
	            }
	            return temp;
	    	}
	        
	        node *search(node* temp, int info){
	        	
	        	if(root == NULL){
	        		cout << "Tree is Empty ! ! !" << endl;
					return NULL;	
				}
				
	        	if(temp == NULL){
					return NULL; 
				}
				
				if(temp->info == info){
					return temp;
				}	
				
				if(info < temp->info){
					return search(temp->left, info);
				} else if(info > temp->info){
					return search(temp->right, info);
				}

				return temp;
			}
			
			void replace(node *temp, int info){
				
				node* toReplace = search(temp, info);
				
				int updatedInfo;
				cout << "Enter the Updated Info: ";
				cin >> updatedInfo;
				
				toReplace->info = updatedInfo;
				cout << endl << "Info Successfully Updated ! ! !" << endl;			
			}
	        
	        int balanceFactorFun(node *temp){
	        	
	        	globalHeight = 0;
	        	heightFun(temp->left, 1);
	        	int left = globalHeight;
	        	
	        	globalHeight = 0;
	        	heightFun(temp->right,1);
	        	int right = globalHeight;
	        	
				return left - right;  	
			}
	        
	        node *getRoot(){
	            return root;
	        }
	};
	
	int main() {
	
	    tree t;
	    node *extra;
	    int option, info;
	    do{
	        cout << endl << "1. Insert" << endl;
	        cout << "2. Delete" << endl;
	        cout << "3. Display" << endl;
	        cout << "4. Update" << endl;
	        cout << "5. Search" << endl;
	        cout << "6. Maximum" << endl;
	        cout << "7. Minimum" << endl;
	        cout << "0. Exit" << endl;
	        cout << "Your Option: " ;
	        cin >> option;
	        
	        if(option == 1){
	            cout << "Enter the Number to Add: ";
	            cin >> info;
	            t.insert(t.getRoot(), info);
	        } else if(option == 2){
	            cout << "Enter the Number to Delete: ";
	            cin >> info;
	            t.Remove(t.getRoot(), info);  
	        } else if(option == 3){
	        	cout << "InOrder: " ;
	            t.inOrder(t.getRoot());
	            cout << endl << "PreOrder: ";
	            t.preOrder(t.getRoot());
	        } else if(option == 4){
	        	cout << "Enter the Info which You want to Update: ";
	        	cin >> info;
				t.replace(t.getRoot(), info);
			} else if(option == 5){
				cout << "Enter the Info Which You want to Search: ";
				cin >> info;
				extra = t.search(t.getRoot(), info);
				if(extra != NULL){
					cout << "Inside Main if" << endl;
					cout << "Given Info is Available ! ! !" << endl;
				} else {
					cout << "Given Info is Not Available ! ! ! " << endl;
				}
			} else if(option == 6){
				extra = t.findMaximum(t.getRoot());
				cout << "Maximum in Tree: " << extra->info << endl;
			}  else if(option == 7){
				extra = t.findMinimum(t.getRoot());
				cout << "Minimum in Tree: " << extra->info << endl;
			} else if(option == 0){
				
	            break;
	        } else {
	            cout << "Invalid Input " << endl;    
	        }
	        
	    }while(option != 0);
	    return 0;
	}