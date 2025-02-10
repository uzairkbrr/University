#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class graph{
    int const n = 5;
    bool matrix[5][5]; // take  2D static array of fixed size for ease
    
public:
    graph(int size){
        // initialize all the values of the matrix to false
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                matrix[i][j] = false;
            }
        }
    }

    void addedge(int source, int destination, bool bi){
        // here bool bi means bidirectional or not
        // if true so node 1 should be connected to node 2 and also the vice versa
        matrix[source][destination] = true;
        
        // if the graph is bi-direction then remove edge from both side
		if (bi){
            matrix[destination][source] = true;
        }
    }

    void removeEdge(int source, int destination , bool bi){
        matrix[source][destination] = false;
        if (bi){
            matrix[destination][source] = false;
        }
    }

    void DFS(int start){
        // here you can use the built-in stack from stack library.
        
        // Initially all the vertices assumed to be not visited
        vector<bool> visited(n, false);
        stack<int> STACK;
        // Push the first value into the stack
        STACK.push(start);

        while (!STACK.empty()){
        	// store the top element of the stack into current variable
            int current = STACK.top();
            // after storing the top element in the current variable, Now I need to remove it from stack
            // so the below code instruction will remove the element from the stack
            STACK.pop();

			// when the element is not visited, then print it and mark as done
            if (!visited[current]){
                cout << current << " ";
                visited[current] = true;
            }
			
			
            for (int i = n - 1; i >= 0; --i){
                if (matrix[current][i] && !visited[i]){
                    STACK.push(i);
            	}
            }
        }
    }

    void BFS(int start){
       
        vector<bool> visited(n, false);
        
        queue<int> QUEUE;
        QUEUE.push(start);
        visited[start] = true;

        // execute the below code till Queue is not empty
        while (!QUEUE.empty()){
            int current = QUEUE.front();
            cout << current << " ";
            QUEUE.pop();

            for (int i = 0; i < n; ++i){
                if (matrix[current][i] && !visited[i]){
                    QUEUE.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    void print(){
        for (int i = 0; i < n; ++i){
            cout << i << ": ";
            for (int j = 0; j < n; ++j){
                if (matrix[i][j]){
                    cout << 1 << " ";
                } else {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
};

int main(){
    
    graph g(4);
    g.addedge(0, 1, true);
    g.addedge(3, 1, true);
    g.addedge(0, 2, true);
    g.addedge(3, 2, true);
    g.addedge(0, 3, true);

    cout << "Graph before removing edges:" << endl << endl;
    g.print();


    cout << endl << "Graph after removing edges:" << endl << endl;
    g.removeEdge(3, 1, true);
    g.print();

    cout << endl << "DFS: ";
    g.DFS(0);

    cout << endl << "BFS: ";
    g.BFS(0);

    return 0;
}
