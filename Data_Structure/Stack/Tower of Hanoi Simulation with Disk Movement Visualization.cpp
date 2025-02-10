#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Stack{
    int top;
    int size;
    int *array;

	public:
	    Stack(int size){
	        top = -1;
	        this->size = size;
	        array = new int[size];
	    }
	    
	    ~Stack(){
	        delete[] array;
	    }
	
	    bool isEmpty(){
	        return top == -1;
	    }
	
	    bool isFull(){
	        return top == size - 1;
	    }
	
	    void push(int value){
	        if (!isFull())
	        {
	            top++;
	            array[top] = value;
	        }
	    }
	
	    int pop(){
	        if (!isEmpty())
	        {
	            int length = top;
	            top--;
	            return array[length];
	        }
	        
	        return -1;
	    }
	
		int topdisk(){
	        return isEmpty() ? 0 : array[top];
	    }
};

void moveDisk(Stack &from, Stack &to, string fromRod, string toRod){
    int disk = from.pop();
    to.push(disk);
    cout << "Disk moved from " << fromRod << " to " << toRod << ": " << disk << endl;
}

int main(){

    int disks, value;
    cout << endl << "Enter the No of Disks : ";
    cin >> disks;
    cout << endl;

    Stack source(disks), auxiliary(disks), destination(disks);

    for (int i = disks; i >= 1; i--){
        source.push(i);
    }

    int totalMoves = pow(2, disks) - 1;

    for (int i = 1; i <= totalMoves; i++){
    	
        if (i % 3 == 1){
            if (!source.isEmpty() && (auxiliary.isEmpty() || source.topdisk() < auxiliary.topdisk())){
                moveDisk(source, auxiliary, "Source", "Auxiliary");
            } else {
                moveDisk(auxiliary, source, "Auxiliary", "Source");
            }
            
        } else if (i % 3 == 2){
        	
            if (!source.isEmpty() && (destination.isEmpty() || source.topdisk() < destination.topdisk())){
                moveDisk(source, destination, "Source", "Destination");
            } else {
                moveDisk(destination, source, "Destination", "Source");
            }
            
        } else {
        	
            if (!auxiliary.isEmpty() && (destination.isEmpty() || auxiliary.topdisk() < destination.topdisk())){
                moveDisk(auxiliary, destination, "Auxiliary", "Destination");
            } else {
                moveDisk(destination, auxiliary, "Destination", "Auxiliary");
            }
        }
    }

    cout << endl << "Total moves : " << totalMoves << endl << endl;
         
  	// Now Printing all the Desks.
    cout << "source rod disks : " << endl;
    for (int i = 0; i < disks; i++){
       	value = source.pop();
        cout << "  " << value << endl;
    }
    
    // This is because when the entered disks is even than Destination Rod is the last one.
	//  & when the given Rod is Odd than the Destination Rod is second last, so for overcomming this confusion the below logic is added.
    if(disks % 2 == 0){
        
        cout << "Auxiliary Rod Disks : "<< endl;
        for (int i = 0; i < disks; i++){
            value = auxiliary.pop();
            cout << "  " << value << endl;
        }
        
        cout << "Destination Rod Disks : " << endl;
        for (int i = 0; i < disks; i++){
            value = destination.pop();
            cout << "  " << value << endl;
        }
    }
    
    if(disks % 2 != 0){
        
         cout << "Auxiliary Rod Disks : " << endl;
        for (int i = 0; i < disks; i++){
            value = destination.pop();
            cout << "  " << value << endl;
        }
        
        cout << "Destination Rod Disks : "<< endl;
        for (int i = 0; i < disks; i++){
            value = auxiliary.pop();
            cout << "  " << value << endl;
        }
    }
    
    

    return 0;
}
