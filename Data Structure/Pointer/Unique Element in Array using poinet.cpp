#include <iostream>
using namespace std;

int main(){
	
	int size;
	
	cout << "Enter size for Array: ";
	cin >> size;
	
	int arr[size];
	
	int *ptr1 = arr;
	
	for(int i=0; i<size; i++){
		cout << "Index no " << i << ": ";
		cin >> *ptr1;
		ptr1++;
	}
	
	cout << "Given Array: ";
	ptr1 = arr;
	for(int i=0; i<size; i++){
		cout << *ptr1 << " ";
		ptr1++;
	}
	
	ptr1 = arr;
	int *ptr2 = arr;
	
	cout << endl << "Unique Elements in Array: ";
	
	for(int i=0; i<size; i++){
		int  count = 0;
		for(int j=0; j<size; j++){
			if(i != j && *ptr1 == *ptr2){
				count++;
			}
			ptr2++;
		}
		
		if(count==0){
			cout << *ptr1 << " ";
		}
		ptr1++;
	}
}