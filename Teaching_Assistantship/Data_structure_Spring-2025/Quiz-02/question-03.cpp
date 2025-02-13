// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void remove_duplicate(vector<string> &rn) {
    for (int i=0; i<rn.size(); i++) {
        for (int j=0; j<rn.size(); j++) {
            if (i != j && rn[i] == rn[j]) {
                rn.erase(rn.begin() + j);
            }
        }
    }
}

int main() {

    vector <string> rn = {"22p-9021", "22p-9032", "22p-9021", "22p-9021", "22p-9032", "22p-9034"};

    cout << "Original Vector: ";
    for (string r : rn ){
        cout << r << " ";
    }

    remove_duplicate(rn);

    cout << endl << endl << "Duplicate Removed & the Vector is: ";
    for (string r : rn ){
        cout << r << " ";
    }

    return 0;
}