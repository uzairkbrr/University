// Author: Uzair Ahmad
#include <iostream>
using namespace std;

int main() {
    
    int size;
    
    // Input the size of the array
    cout << "Enter Size for the Array: ";
    cin >> size;
    
    int arr[size];
    int *ptr = arr;
    
    // Input values for the array
    cout << "Enter Values for First Array: " << endl;
    for(int i=0; i<size; i++){
        cout << "Index No " << i << ": " ;
        cin >> *ptr;
        ptr++;
    }
    
    ptr = arr;
    int number;
    
    // Input the number to search for
    cout << "Enter Number which You want to Search: ";
    cin >> number;
    
    // Search for the number in the array and retrieve its index
    for(int i=0; i<size; i++){
        if(number == *ptr){
            cout << "Index of " << number << " is " << i ;
            break; // Exit the loop once the number is found
        }
        ptr++;
    }

    return 0;
}
