// Author: Uzair Ahmad
#include <iostream>
using namespace std;

int main() {
    
    // Declare variables
    int size;
    
    // Input the size of the array
    cout << "Enter Size for the Array: ";
    cin >> size;
    
    // Declare an array and a pointer
    int arr[size];
    int *ptr = arr;
    
    // Input values for the array
    cout << "Enter Values for Array: " << endl;
    for(int i=0; i<size; i++){
        cout << "Index No " << i << ": " ;
        cin >> *ptr;
        ptr++;
    }
    
    // Reset the pointer to point to the start of the array
    ptr = arr;
  
    // Print the original array
    cout << "Original Array: ";
    for(int i=0; i<size; i++){
      cout << *ptr << " ";
      ptr++;
    }
    
    // Pointers to the start and end of the array
    int *start = arr;
    int *end = arr + (size - 1);
    
    // Reverse the array using pointers
    for(int i=0; i<size/2; i++){
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
  
    // Reset the pointer to point to the start of the reversed array
    ptr = arr;
  
    // Print the reversed array
    cout << endl << "Reversed Array: ";
    for(int i=0; i<size; i++){
      cout << *ptr << " ";
      ptr++;
    }
  
    return 0;
}
