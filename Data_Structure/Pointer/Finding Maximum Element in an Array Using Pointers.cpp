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
    
    // Reset the pointer to point to the start of the array
    ptr = arr;
    
    int maximum = *ptr; // Assume the first element is the maximum
    
    // Iterate through the array to find the maximum element
    for(int i=0; i<size; i++){
        if(maximum < *ptr){
            maximum = *ptr; // Update maximum if a larger element is found
        }
        ptr++;
    }
    
    // Print the maximum element
    cout << "Maximum: " << maximum ;

    return 0;
}
