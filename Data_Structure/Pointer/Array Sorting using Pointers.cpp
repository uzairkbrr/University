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
    cout << "Enter Values for the Array: " << endl;
    for(int i=0; i<size; i++){
        cout << "Index No " << i << ": " ;
        cin >> *ptr;
        ptr++;
    }
    
    // Create a temporary pointer to use during swapping
    int *temp = arr;
    ptr = arr;
    
    // Selection sort algorithm to sort the array
    for(int i=0; i<size; i++){
        ptr = arr + i; // Set ptr to the i-th element for comparison
        for(int j=i; j<size; j++){
            if(*temp > *ptr){
                int extra = *ptr;
                *ptr = *temp; // Swap the values using the temporary variable
                *temp = extra;
            }
            ptr++;
        }
        temp++; // Move the temporary pointer to the next element
    }
    
    ptr = arr;
    cout << "Sorted Array: " ;
    for(int i=0; i<size; i++){
        cout << *ptr << " " ;
        ptr++;
    }
    
    return 0;
}
