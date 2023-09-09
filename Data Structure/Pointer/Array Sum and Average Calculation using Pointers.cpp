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
    
    // Calculate the sum and average of array elements
    int sum = 0, avg = 0;
    for(int i=0; i<size; i++){
        sum += *ptr;
        ptr++;
    }
    
    avg = sum / size;
    
    // Print the sum and average
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    return 0;
}
