#include <iostream>
using namespace std;

// Function to perform recursive bubble sort
void recursiveBubbleSort(int a[], int* p, int* q, int size, int count){
    // Check if p is greater than q, if so, swap them
    if(*p > *q){
        int swap = *p;
        *p = *q;
        *q = swap;
    }
    
    // Move pointers and update count
    p++;
    q++;
    count++;
    
    // Recursively call bubble sort until all elements are compared
    if(count < size - 1) {
        recursiveBubbleSort(a, p, q, size, count);
    }
    
    // Reduce the size after each pass
    size = size - 1;
    
    // Recursive call to reset pointers and perform bubble sort again
    if(size != 0){
        recursiveBubbleSort(a, a, a+1, size, 0);
    }
}

int main(){
    int a[7] = {9, 3, 6, 7, 2, 0, 1};
    
    cout << endl << "Before Sorting: ";
    for(int i=0; i<7; i++){
        cout << a[i] << " ";
    } 
    
    int* p = a;
    int* q = p+1;
    
    cout << endl << "After Sorting: ";
    recursiveBubbleSort(a, p, q, 7, 0);
    
    for(int i=0; i<7; i++){
        cout << a[i] << " ";
    } 
    
    return 0;
}
