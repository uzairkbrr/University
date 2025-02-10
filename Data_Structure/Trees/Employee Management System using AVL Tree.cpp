#include <iostream>
#include <random>
using namespace std;


struct node{
    int id;
    string name;
    string title;
    node *left;
    node *right;
};

class avlTree{
	
private:
    int height;
    node *rootNode;
    node *temp;
    node *rotateNode;
    node *shiftingNode;

public:
    avlTree(){
        height = 0;
        rootNode = NULL;
        temp = NULL;
        rotateNode = NULL;
        shiftingNode = NULL;
    }
    
    void setHeight(int newHeight){
        this->height = newHeight;
    }

    int treeHeight(node *current, int treeHt){
    	
        if (current->left != NULL){
            treeHeight(current->left, treeHt + 1);
        }
        
        if (treeHt > height){
            height = treeHt;
        }
        
        if (current->right != NULL){
            treeHeight(current->right, treeHt + 1);
        }
        
        return height;
    }

    node *searchEmp(node *current, int id){
    	
        if (current->id == id){
            return current;
        }
        
        if (id < current->id){
        	
            if (current->left != NULL){
                return searchEmp(current->left, id);
            } else {
                return NULL;
            }
        
		} else if (id > current->id) {
            if (current->right != NULL){
                return searchEmp(current->right, id);
            } else {
                return NULL;
            }
        }
        
        return NULL;
    }

    int balanceLevel(node *current){
    	
        int leftTree = 0;
        int rightTree = 0;
        
        if (current->left == NULL){
            leftTree = 0;
        } else {
            this->height = 0;
            leftTree = treeHeight(current->left, 1);
        }

        if (current->right == NULL){
            rightTree = 0;
        } else {
            this->height = 0;
            rightTree = treeHeight(current->right, 1);
        }

        return leftTree - rightTree;
    }
    
    
    node *hireEmp(node *current, int id, string name, string title){
    	
        if (rootNode == NULL){
            current = new node;
            current->id = id;
            current->name = name;
            current->title = title;
            current->left = NULL;
            current->right = NULL;
            rootNode = current;
            cout << "\nEmployee added !" << endl;

            return NULL;
        }
        
		
		if (id < current->id){
			
            if (current->left != NULL){
                current->left = hireEmp(current->left, id, name, title);
            } else {
                current->left = new node;
                current->left->id = id;
                current->left->name = name;
                current->left->title = title;
                current->left->left = NULL;
                current->left->right = NULL;
                cout << "\nEmployee added !" << endl;
            }
        
		} else if (id > current->id) {
			
			
            if (current->right != NULL){
                current->right = hireEmp(current->right, id, name, title);
            } else {
                current->right = new node;
                current->right->id = id;
                current->right->name = name;
                current->right->title = title;
                current->right->left = NULL;
                current->right->right = NULL;
                cout << "\nEmployee added !" << endl;
            }
        
		}

        int balancelevel = balanceLevel(current);
        
		if (balancelevel == 2){
		    
			if (id < current->left->id){
                temp = move_right(current);
            } else {
                current->left = move_left(current->left);
                temp = move_right(current);
            }
            
            return temp;
        
		} else if (balancelevel == -2) {
			
            if (id > current->right->id){
                temp = move_left(current);
            } else {
                current->right = move_right(current->right);
                temp = move_left(current);
            }
            
            return temp;
        }
        
        return current;
    }
    
    
    void changeEmpData(node *current, int id){

        cout << "Employee Data : " << endl;
        cout << " Name : " << current->name << endl;
        cout << " Title : " << current->title << endl;
        cout << " ID :" << current->id << endl;

        while (true){
            
			int choise;
            cout << "Press 1 : Update name " << endl;
            cout << "Press 2 : Update title " << endl;
            cout << "Press 0 : Nothing to update " << endl;

            cout << endl << "Select choise : ";
            cin >> choise;
            
            if (choise == 1){ 
            
                string name;
                cout << "Enter the new Name : ";
                fflush(stdin);
                getline(cin, name);
                cout << endl;

                current->name = name;
                cout << " Successfully Updated " << endl;
            
			} else if (choise == 2) {
				
                string title;
                cout << "Enter the New Title : ";
                fflush(stdin);
                getline(cin, title);
                cout << endl;

                current->title = title;
                cout << "Successfully Updated " << endl;
            
			} else if (choise == 0){
                break;
            
			} else {
                cout << endl << "Invalid Input " << endl;
            }
        }
    }

    node *move_right(node *current){
    	
        rotateNode = current->left;
        shiftingNode = rotateNode->right;
        rotateNode->right = current;
        current->left = shiftingNode;
        
        if (current == rootNode){
            rootNode = rotateNode;
        }
        
        return rotateNode;
    }

    node *move_left(node *current){ 
    
        rotateNode = current->right;
        shiftingNode = rotateNode->left;
        rotateNode->left = current;
        current->right = shiftingNode;
    
	    if (current == rootNode){
            rootNode = rotateNode;
        }
        
        return rotateNode;
    }

    node *fireEmp(node *current, int id){
	
        if (current == NULL){
            return current;
        }

        if (id < current->id){
            current->left = fireEmp(current->left, id);
        } else if (id > current->id) {
            current->right = fireEmp(current->right, id);
        } else {
            if (current->left == NULL){
                temp = current->right;
                
				if (current == rootNode){
                    rootNode = current->right;
                }
                
                delete current;
                return temp;
            
			} else if (current->right == NULL){
                
				temp = current->left;
                
				if (current == rootNode){
                    rootNode = current->left;
                }
                
                delete current;
                return temp;
            }

            temp = mini_node(current->right);
            current->id = temp->id;
            current->right = fireEmp(current->right, temp->id);
        }

        int balancelevel = balanceLevel(current);

        if (balancelevel > 1){

            if (balanceLevel(current->left) > 1){
                temp = move_right(current);
            } else {
                current->left = move_left(current->left);
                temp = move_right(current);
            }
            
            return temp;
        
		} else if (balancelevel < -1) {
			
            if (balanceLevel(current->right) < -1){
                temp = move_left(current);
            } else {
                current->right = move_right(current->right);
                temp = move_left(current);
            }
            
            return temp;
        }
        
        return current;
    }
    
    void showChart(node *current, int spaces){
    	
        if (current == NULL){
            return;
        }

        spaces += 8;
        showChart(current->right, spaces);

        cout << endl;

        for (int i = 8; i < spaces; i++){
            cout << " ";
        }

        cout << "| id : " << current->id << " - " << current->name << "( " << current->title << " )" <<  endl;

        showChart(current->left, spaces - 8);
        
    }

    node *mini_node(node *current){
    	
        if (current->left != NULL){
            return mini_node(current->left);
        }
        
        return current;
    }

    node *get_root(){
        return rootNode;
    }
};

int main(){
	
	int option, id;
	string name, title;
    avlTree organization;
    
	do{
        cout << endl << " -> 1 : Add Employee " << endl;
        cout << " -> 2 : Search Employee " << endl;
        cout << " -> 3 : Display Organization Chart " << endl;
        cout << " -> 4 : Update Employee Info " << endl;
        cout << " -> 5 : Fire Employee" << endl;
        cout << " -> 0 : Exit Program" << endl;

        cout << endl << "Select Option: ";
        cin >> option;
        
        if (option == 1){
        
            cout << endl << "Employee Name : ";
            fflush(stdin);
            getline(cin, name);
            cout << endl;

            cout << "Employee title : ";
            fflush(stdin);
            getline(cin, title);
            cout << endl;

            cout << "Enter the Employee id  : ";
            cin >> id;
            
            organization.hireEmp(organization.get_root(), id, name, title);
        
		} else if (option == 2){
			
            if (organization.get_root() == NULL){
                cout << endl << "No employee in organization" << endl << endl;
            } else{
            	
                cout << " Employee id  : ";
                cin >> id;
                
                node *current = NULL;
                
				current = organization.searchEmp(organization.get_root(), id);

                if (current == NULL){
                    cout << endl <<  "Employee is Not Available in Organization !" << endl << endl;
                } else {
                	cout << endl;
                    cout << "Employee Data : " << endl;
                    cout << " Name : " << current->name << endl;
                    cout << " title : " << current->title << endl;
                    cout << " id :" << current->id << endl;
                }
            }
        
		} else if (option == 3){
			
            if (organization.get_root() == NULL){
                cout << endl << "No Employee in Organization !" << endl << endl;
            } else {
                organization.showChart(organization.get_root(), 0);
            }
        
		} else if (option == 4){
			
            if (organization.get_root() == NULL){
                cout << endl <<  "No Employee in Organization" << endl << endl;
            } else {
                cout << "Employee id  : ";
                cin >> id;
                
                node *current = NULL;
                
				current = organization.searchEmp(organization.get_root(), id);

                if (current == NULL){
                    cout << endl << "Employee is Not Available in Organization"  << endl << endl;
                } else {
                    organization.changeEmpData(current, id);
                }
            }
        
		} else if (option == 5) {
			
            if (organization.get_root() == NULL){
                cout << endl << "Tree is empty !" << endl << endl;
            } else {
                cout << "Employee id : ";
                cin >> id;
                
				node *current = NULL;
                
				current = organization.searchEmp(organization.get_root(), id);

            	if (current == NULL){
                    cout << endl << "Employee is Not Avaiable in Organization" << endl << endl;
                } else {
                    organization.fireEmp(current, id);
                    cout << endl << "Employee  Successfully Fired ! " << endl << endl;
                }
            }
        
		} else if (option == 0){
            break;
        
		} else {
            cout << endl << "Invalid Input " << endl;
        }  
        
    }while(option != 0);
    
    return 0;
}