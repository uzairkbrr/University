#include <iostream>
using namespace std;

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}


void linearSearch(int arr[], int size, int toFind){
	
	for(int i=0; i<size; i++){
		if(arr[i] == toFind){
			cout << toFind << " is Available at index " << i << endl << endl;
			return;
		}
	}	
}


void binarySearch(int arr[], int size, int toFind){
	
	int start = 0;
	int end = size - 1;
	int mid;
	
	while(start <= end){
		
		mid = start + ((end - start) / 2);
		
		if(arr[mid] == toFind){
			cout << toFind << " is Available at index " << mid << endl << endl;
			return;
		} else if(arr[mid] > toFind){
			end = mid - 1; 
		} else if(arr[mid] < toFind){
			start =  mid + 1;
		}
	}
	
	cout << toFind << " is Not Available !" << endl << endl;
}


void binarySearchRecersive(int arr[], int left, int right, int key){
	if(left <= right){
		
		int mid = left + (right - left) / 2;
		
		if(arr[mid] == key){
			cout << endl << key << " is Available on Index " << mid << endl << endl;
			return;
		} else if(arr[mid] < key){
			binarySearchRecersive(arr, mid+1, right, key);
		} else if(arr[mid] > key){
			binarySearchRecersive(arr, left, mid, key);
		}
			
	} else {
		cout << endl << "Element not Found !" << endl << endl;
		return;
	}
	
	
}


void selectionSort(int arr[], int size){
	
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	cout << endl << "Array is Now Sorted in Ascending Order: ";
	print(arr, size);
}


void bubbleSort(int arr[], int size){
	
	 for(int i=0; i < size - 1; i++){
	 	for(int j=0; j < size - i; j++){
	 		if(arr[j] < arr[j+1]){
	 			int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			 }
		 }
	 }
	
	cout << endl << "Array is Now Sorted in Descending Order: ";
	print(arr, size);
}



void insertionSort(int arr[], int size){
	
	for(int i=1; i<size; i++){
		int temp = arr[i];
		int j = i - 1;
		
		while(j>=0 && arr[j] < temp){
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = temp;
		
	}
	
	
	cout << endl << "Array is Sorted in Descending Order: ";
	print(arr, size);

}


void merge(int arr[], int left, int mid, int right){
	
	int i = left;
	int j = mid+1;
	int tempArray[right - left + 1];
	
	int k=0;
	
	while(i <= mid && j <= right){
		
		if(arr[i] < arr[j]){
			tempArray[k] = arr[i];
			i++;
		} else {	
			tempArray[k] = arr[j];
			j++;
		}
		k++;
	}
	
	while(i <= mid){
		tempArray[k] = arr[i];
		i++;
		k++;
	}
	
	while(j <= right){
		tempArray[k] = arr[j];
		j++;
		k++;	
	}
	
	
	for(int k=0; k <= right - left; k++){
		arr[left+k] = tempArray[k];
	}
}


void mergeSort(int arr[], int left, int right){
	
	if(left < right){
		int mid = left + ((right - left) / 2);
		
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		
		merge(arr, left, mid, right);
	}
	
}


int main(){
	
	int size = 10;
	int array[size] = {10,5,2,7,1,8,9,3,4,6};
	int sortedArray[size] = {1,2,3,4,5,6,7,8,9,10};
	
 	int option, key;
 	
 	do{
 		
 	
 		cout << endl << "Original Array: ";
 		print(array, size);
 		cout << "Sorted Array: ";
 		print(sortedArray, size);
 		
 		cout << endl << "1. Linear Search" << endl;
 		cout << "2. Binary Search" << endl;
 		cout << "3. Binary Search Recersive" << endl;
 		cout << "4. Selection Sort (Ascending)" << endl;
 		cout << "5. Bubble Sort (Descending)" << endl;
 		cout << "6. Insertion Sort (Descending)" << endl;
 		cout << "7. Merge Sort (Ascending)" << endl;
 		cout << "0. Exit" << endl << endl;
 		cout << "Your Option: ";
 		cin >> option;
 		
 		
 		if(option == 1 || option == 2 || option == 3){
 			cout << endl << "Enter Key to Find: ";
 			cin >> key;
		}
 		
 		if(option == 1){
 			cout << endl;
 			cout << endl;
 			linearSearch(array, size, key);
		} else if(option == 2 ){
 			cout << endl;
			binarySearch(sortedArray, size, key);
		} else if(option == 3){
			binarySearchRecersive(sortedArray, 0, size - 1, key);	
		} else if(option == 4){
			selectionSort(array, size);	
			cout << endl;
		} else if(option == 5){
			bubbleSort(array, size);
		} else if(option == 6){
			insertionSort(array, size);	
		} else if(option = 7){
			mergeSort(array, 0, size-1);	
		} else if(option == 0){
			cout << endl << "Program is Exiting . . ." << endl;
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
 		
	}while(option != 0);
 	
	
	return 0;
}