#include <iostream>
using namespace std;

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int *a = array;

  a+=2;
  cout << "A1: " << *a << endl; // A1: 30

  *a = *a * 2 - 13;
  cout << "A2: " << *a << endl; // A2: 47

  int *b = a--;
  cout << "A3: " << *a << endl; // A3: 20
  cout << "B1: " << *b << endl; // B1: 47

  cout << "A4: " << *(a+2) << endl; // A4: 40

  *(a+3) = 100;
  cout << "A5: " << *a << endl; // A5: 20

  int *c = a+1;
  cout << "C1: " << *(c-1) << endl; // C1: 20
  cout << "C2: " << *c << endl; // C2: 47

  cout << "arr[2]: " << array[2] << endl; // arr[2]: 47
  cout << "arr[4]: " << array[4] << endl; // arr[4]: 100

  return 0;
}

