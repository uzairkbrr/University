// Author: Uzair Ahmad
#include <iostream>
using namespace std;

int main() {
    int size;
	
	cout << "Enter Size for the Array: ";
	cin >> size;

	
	int arr[size];

    int *ptr = arr;

    // Input values into the array using pointers
    cout << "Enter Values for Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Index No " << i << ": ";
        cin >> *ptr;
        ptr++;
    }

    ptr = arr;

    // Display values of the array before swapping
    cout << "Values of Array Before Swapping is ";
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    int *p1 = arr;
    int *p2 = arr + (size - 1);

    // Swap elements using pointers
    for (int i = 0; i < size / 2; i++) {
        int extra = *p1; // Store the value pointed by p1 temporarily
        *p1 = *p2;       // Assign the value pointed by p2 to p1
        *p2 = extra;     // Assign the stored value to p2
        p1++;
        p2--;
    }

    ptr = arr;

    // Display values of the array after swapping
    cout << endl << "Values of Array After Swapping is ";
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}
