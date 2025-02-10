#include <iostream>
// Step 0: Header file for vectors
#include <vector>

using namespace std;

int main() {
  // Step 1: Declare an empty vector of integers
  vector<int> numbers;

  while (true) {
    char choice;
    int number;

    cout << "Do you wanna add an integer to the vector?: (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
      cout << "Enter an Integer: ";
      cin >> number;
      numbers.push_back(number);
    } else {
        break;
    }
  }

  // Step 2: Display all elements (if any) using a loop
  if (numbers.size()) {
    cout << endl << "Elements in the vector: ";

    for (int num : numbers) {
      cout << num << " ";
    }
    cout << endl;
  } else {
    cout << endl << "Number list is empty, Nothing to print!" << endl;
  }
  return 0;
}
