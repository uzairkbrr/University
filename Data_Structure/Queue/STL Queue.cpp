#include <iostream>
#include <queue>
using namespace std;

int main() {
   
   // queue follow fifo order
   // fifo == first in first out
    queue<int> q;
    
    q.push(5);
    q.push(8);
    q.push(13);
    
    cout << q.front() << endl;
    cout << "Size of Queue is " <<  q.size() << endl;
    q.pop();
    cout << "Size of Queue is " <<  q.size() << endl;
    
    
    if(q.empty())
        cout << "Queue is Empty" << endl;
    else 
        cout << "Queue is not Empty" << endl;
    
    
    return 0;
}