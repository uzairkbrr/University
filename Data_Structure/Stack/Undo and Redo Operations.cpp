#include <iostream>
using namespace std;

struct node {
    char word;
    node* next;

    node(char word) {
        this->word = word;
        this->next = NULL;
    }
};

class Stack {
private:
    node* top;
    node* newNode;
    string name = "Uzair";
    int size;
    int length;

public:
    Stack(int size) {
        this->size = size;
        this->length = 0; // Initialize length to 0
//        top = NULL;
//        newNode = NULL;
    }

    void push(char word) {
        newNode = new node(word);
        newNode->next = top;
        top = newNode;
        length++; // Increment the length
    }

    char pop() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return '\0'; // Return a null character indicating an error
        }
        newNode = top;
        top = top->next;

        char word = newNode->word;
        delete newNode;

        newNode = NULL;
        length--; // Decrement the length
        return word;
    }

    void printName() {
        cout << this->name << endl;
    }

    void display() {
        for (int i = 0; i < length; i++) {
            cout << name[i];
        }

        cout << endl;
    }
};

int main() {

    int size = 5;
    Stack first(size), second(size);
    int option;
    char word;

    first.printName();
    do {
        cout << "1. Undo" << endl;
        cout << "2. Redo" << endl;
        cout << "0. Exit" << endl << endl;
        cout << "Your Option: ";
        cin >> option;

        if (option == 1) {
            word = first.pop();
            if (word != '\0') {
                second.push(word);
                first.display();
            }
        }
        else if (option == 2) {
            word = second.pop();
            if (word != '\0') {
                first.push(word);
                first.display();
            }
        }
        else if (option == 0) {
            break;
        }
        else {
            cout << endl << "Invalid Input " << endl << endl;
        }

    } while (option != 0);

    return 0;
}
