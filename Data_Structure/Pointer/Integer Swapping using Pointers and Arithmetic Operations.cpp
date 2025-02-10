// Author: Uzair Ahmad
#include <iostream>
using namespace std;

// Function to swap two integer values using pointers
void swap(int *p1, int *p2){
    // Swap logic using arithmetic operations without using a temporary variable
	*p1 = *p1 + *p2;       // Sum of both values is stored in p1
	*p2 = *p1 - *p2;       // Difference between the sum (stored in p1) and original p2 value is stored in p2
	*p1 = *p1 - *p2;       // Difference between the updated p1 value and updated p2 value (original p1 value) is stored in p1
}

int main(){
    int a, b;

    cout << "Enter Number One: ";
    cin >> a;
    cout << "Enter Number Two: ";
    cin >> b;

    int *ptr1 = &a, *ptr2 = &b;

    cout << "Before Swapping: " << endl;
    cout << "A: " << *ptr1 << endl;
    cout << "B: " << *ptr2 << endl;

    // Call the swap function by passing pointers to the integers
    swap(ptr1, ptr2);

    cout << "After Swapping: " << endl;
    cout << "A: " << *ptr1 << endl;
    cout << "B: " << *ptr2 << endl;
}
