// Author: Uzair Ahmad
#include <iostream>
using namespace std;

int main() {
    
    int size;
    
    // Input the size of the arrays
    cout << "Enter Size for the Array: ";
    cin >> size;
    
    int arr1[size], arr2[size], arr3[size+size];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *ptr3 = arr3;
    
    // Input values for the first array
    cout << "Enter Values for First Array: " << endl;
    for(int i=0; i<size; i++){
        cout << "Index No " << i << ": " ;
        cin >> *ptr1;
        ptr1++;
    }
    
    // Input values for the second array
    cout << endl << "Enter Values for Second Array: " << endl;
    for(int i=0; i<size; i++){
        cout << "Index No " << i << ": " ;
        cin >> *ptr2;
        ptr2++;
    }

    // Reset pointers to the start of the arrays
    ptr1 = arr1;
    ptr2 = arr2;
    
    // Concatenate the two arrays into arr3
    for(int i=0; i<size+size; i++){
        if(i<size){
            *ptr3 = *ptr1; // Copy elements from the first array
            ptr1++;
            ptr3++;
        } else{
            *ptr3 = *ptr2; // Copy elements from the second array
            ptr2++;
            ptr3++;
        }
    }
    
    // Reset ptr3 to point to the start of arr3
    ptr3 = arr3;
    
    // Print the concatenated array
    cout << "Concatenated Array: " ;
    for(int i=0; i<size+size; i++){
        cout << *ptr3 << " " ;
        ptr3++;
    }
    
    return 0;
}
