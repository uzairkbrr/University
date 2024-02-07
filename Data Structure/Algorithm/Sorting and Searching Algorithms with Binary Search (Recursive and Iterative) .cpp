#include<iostream>
using namespace std;

// Function to swap two integers
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// Function to display an array
void display(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

// Function implementing Bubble Sort
void bubbleSort(int size, int arr[]) {
    int comparisons = 0;
    // Implement the bubble sort logic here
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            comparisons++;
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }   
        }
        // Display the array after each pass (inner loop)
        cout << endl << "Array After swap no: " << i + 1 << endl;
        display(size, arr);
    }
    cout << endl << "Bubble Sort Comparisons: " << comparisons << endl << endl;
}

// Function implementing Selection Sort
void selectionSort(int size, int arr[]) {
    int comparisons = 0;
    for(int i = 0; i < size - 1; i++){
        // Assume "arr[i]" is the minimum value in each iteration
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            comparisons++;
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // Display the array after each pass (inner loop)
        swap(&arr[i], &arr[minIndex]);
        display(size, arr);
    }   
    cout << endl << "Selection Sort Done in "<< comparisons << " Comparisons: " << endl;
}

// Function to merge two subarrays L and M into arr
void merge(int arr[], int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    int leftArray[leftSize];
    int rightArray[rightSize];    

    // Left values array
    for(int i = 0; i < leftSize; i++){
        leftArray[i] = arr[left + i];
    }

    // Adding right array
    for(int i = 0; i < rightSize; i++){
        rightArray[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    // Run until it doesn't exceed leftSize or rightSize
    while (i < leftSize && j < rightSize){
        // Compare corresponding elements of leftArray & rightArray and merge into the final array accordingly
        if (leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        } else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Check if some elements exist in any array;
    // These values will already be sorted, so add these at the end of the original array
    while (i < leftSize){
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

// Function implementing Merge Sort
void mergeSort(int arr[], int l, int r) {
    int mid;
    if(l < r){
        mid = l + (r - l) / 2; 
        mergeSort(arr, l, mid); // Left side
        mergeSort(arr, mid + 1, r); // Right side
        merge(arr, l, mid, r);  // Merge when going back
    }
}

// Function for recursive binary search
int binarySearchRecursive(int arr[], int left, int right, int key, int &comparisons) {
    // If left (start) is <= right (end) then execute, else not
    if(left <= right){
        int mid = left + (right - left) / 2;
        comparisons++;
        if(key == arr[mid]){
            return mid;
        }
        if(key < arr[mid]){
            return binarySearchRecursive(arr, left, mid - 1, key, comparisons);
        } else {
            return binarySearchRecursive(arr, mid + 1, right, key, comparisons);
        }
    }
    return -1;
}

// Function for iterative binary search
int binarySearchIterative(int arr[], int size, int key, int &comparisons) {
    // Implement the iterative binary search logic here
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        comparisons++;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + ( e - s ) / 2;
    }

    // If not found, return -1
    return -1;
}

int main() {
    int size, key, choice;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Index no [" << i << "] : ";
        cin >> arr[i];
    }

    do{
        // Display the menu
        cout << endl << "Menu:" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Merge Sort" << endl;
        cout << "4. Binary Search (Recursive)" << endl ;
        cout << "5. Binary Search (Iterative)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bubbleSort(size, arr);
                break;
            case 2:
                selectionSort(size, arr);
                break;
            case 3:
                mergeSort(arr, 0, size-1);
                display(size, arr);
                break;
            case 4: {
                cout << "Enter the value to find: ";
                cin >> key;
                int comparisons = 0;
                int result = binarySearchRecursive(arr, 0, size - 1, key, comparisons);
                if (result != -1) {
                    cout << "Element found at index " << result << endl;
                } else {
                    cout << "Element not found\n";
                }
                cout << "Comparisons: " << comparisons << endl;
                break;
            }
            case 5: {
                cout << "Enter the value to find: ";
                cin >> key;
                int comparisons = 0;
                int result = binarySearchIterative(arr, size, key, comparisons);
                if (result != -1) {
                    cout << "Element found at index " << result << endl;
                } else {
                    cout << "Element not found\n";
                }
                cout << "Comparisons: " << comparisons << endl;
                break;
            }
            case 0: {
                cout << endl << "Program is Exiting . . ." << endl << endl;
                break;
            }
            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 0);

    return 0;
}
