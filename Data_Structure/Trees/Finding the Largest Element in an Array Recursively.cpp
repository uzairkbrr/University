// Author: Uzair Ahmad

#include <iostream>
using namespace std;

int maxInArray(int array[], int size, int maximum, int n){
    if(n < size){
        if(maximum < array[n]) maximum = array[n];
        
        maxInArray(array, size, maximum, n+1);
    } else {
        return maximum;
    }
}

int main() {
    
    int size;
    
    cout << "Enter Size of Array: ";
    cin >> size;
    
    int array[size];
    for(int i=0; i<size; i++){
        cout << "index no " << i << ": ";
        cin >> array[i];
    }
    
    // let assume 1st number is maximum
    int maximum = array[0];
    
    int result = maxInArray(array, size, maximum, 0);
    
    cout << "Maximum Number in the Array is " << result << endl;
    
    return 0;
}