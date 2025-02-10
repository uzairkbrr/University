#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

class Node{
	
	public:
	    int val;
	    Node* next;
	    
	    Node(int val){
	        this->val = val;
	        this->next = NULL;
	    }
};

class LinkedList{
	
	public:
	    Node* head;
	    Node* current;
	    Node* newNode;
	    Node* prev;
	    
	    LinkedList(){
	        this->head = NULL;
	        this->current = NULL;
	        this->newNode = NULL;
	        this->prev = NULL;
	    }
	
	    void append(int val){
	    	
	        newNode = new Node(val);
	        
			if (head == NULL){
	            head = newNode;
	        } else {
	            
				current = head;
	            
	            while (current->next != NULL){
	                current = current->next;
	            }
	            
	            current->next = newNode;
	        }
	    }
	    
	    
	    void remove(int val){
			curr = head;
			prev = NULL;

			// If the head node itself needs to be removed
			if (curr != NULL && curr->val == val){
				head = curr->next; // Change head
				delete curr;        // Free old head
				return;
			}

			// Search for the node to be removed, keep track of the previous node
			while (curr != NULL && curr->val != val){
				prev = curr;
				curr = curr->next;
			}

			// If the node was not found
			if (curr == NULL) return;

			// Unlink the node from the list
			prev->next = curr->next;

			// Free memory
			delete curr;
		}
	    
	    
	    void printLL(){
	    	
	        current = head;
	        
			while (current != NULL){
	            cout << current->val << " ";
	            current = current->next;
	        }
	    }
};

class graph{
	
	    LinkedList* adjlist;
	    Node* temp;
	    int size;
	
	public:
	    graph(int size){
	        adjlist = new LinkedList[size]; 
	        this->size = size;
	    }
	
	    void addedge(int source, int destination, bool bi){
	    	
	        adjlist[source].append(destination);
	        
	        // link the source to destination as well, when it is "bi" directional graph
	        if (bi){
	            adjlist[destination].append(source);
	        }
	    }
	
	    void removeEdge(int source, int destination, bool bi){
	    	
	        adjlist[source].remove(destination);
	        
			if (bi) {
	            adjlist[destination].remove(source);
	        }
	    }
	
	    void DFS(int start){
	    	
	        vector<bool> visited(size, false);
	        
			stack<int> STACK;
	        STACK.push(start);
	
	        while (!STACK.empty()){
	        	
	            int current = STACK.top();
	            STACK.pop();
	
	            if (!visited[current]) {
	                cout << current << " ";
	                visited[current] = true;
	            }
	
	            // push all unvisited vertices to the stack
	            temp = adjlist[current].head;
	        	
	        	// first, all the neighours will be pushed to the stack and then pushed values will be poped (print) from the stack
				while (temp != NULL){
	            	
	                if (!visited[temp->val]){
	                    STACK.push(temp->val);
	                }
	                temp = temp->next;
	            }
	        }
	    }
	
	    void BFS(int start){
	    	
	    	// initially all the vertices is not visited
	        vector<bool> visited(size, false);
	        
			queue<int> QUEUE;
	        QUEUE.push(start);
	        
			visited[start] = true;
	
	        while (!QUEUE.empty()) {
	            int current = QUEUE.front();
	            cout << current << " ";
	            QUEUE.pop();

	            temp = adjlist[current].head;
	            
	            while (temp != NULL){
	                if (!visited[temp->val]){	
	                    QUEUE.push(temp->val);
	                    visited[temp->val] = true;
	                }
	                
	                temp = temp->next;
	            }
	        }
	    }
	
	    void print(){
	        for (int i = 0; i < size; ++i){
	            cout << "List for Vertix " << i << " => ";
	            adjlist[i].printLL();
	            cout << endl;
	        }
	    }
};

int main(){
    
    graph g(5);
    g.addedge(0, 1, true);
    g.addedge(3, 1, true);
    g.addedge(0, 2, true);
    g.addedge(3, 2, true);
    g.addedge(0, 3, true);
    g.addedge(4, 3, true);
    g.addedge(4, 1, true);

    cout << "Graph Before removing Edges:" << endl;
    g.print();

    cout << endl << "Graph After removing Edges:" << endl;
    g.removeEdge(4, 3, true);
    g.removeEdge(0, 2, true);
    g.removeEdge(0, 1, true);
    
    
    g.print();

    cout << endl << "Depth First Search: ";
    g.DFS(0);

    cout << endl << "Breadth First Search: ";
    g.BFS(0);

    return 0;
}
