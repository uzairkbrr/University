// Author: Uzair Ahmad

#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

// Function to check if a given string is a palindrome
void isPalindrome(char input[]);

// Function to show the frequency of a specific character in a string
void showFrequency(char letter, char input[]);

int main(){
    char input[20];
    int option;
    
    cout << "Enter Something without Spaces: ";
    cin >> input;

    do{
        cout << "1) Check if Palindrome." << endl;
        cout << "2) Count frequency of Character." << endl;
        cout << "3) Exit !" << endl << endl;
        cout << "Option: ";
        cin >> option;
        cout << endl;

        if(option == 1){
            isPalindrome(input);
        } else if(option == 2){
            char letter;

            cout << "Enter Char You want to check Frequency of => ";
            cin >> letter;

            showFrequency(letter, input);

        } else if(option == 3){
            break;
        } else {
            cout << "Invalid Input:";
        }

    } while(option != 3);

    cout << "This code is written by Uzair Ahmad" << endl;

    return 0;
}

// Function to check if a given string is a palindrome
void isPalindrome(char input[]){
    int i = 0, length = 0;
    bool palindrome = true;

    // Finding the length of the character array
    while(input[i] != '\0'){
        length++;
        i++;
    }

    char *p1 = &input[0]; // First element of the character array
    char *p2 = &input[length - 1]; // Last element of the character array

    int j = 0;
    while(j <= length / 2){
        if(*p1 != *p2){
            palindrome = false;
        }
        j++;
        p1++;
        p2--;
    }

    if(palindrome){
        cout << input << " is palindrome" << endl << endl;
    } else {
        cout << input << " is not palindrome" << endl << endl;
    }
}

// Function to show the frequency of a specific character in a string
void showFrequency(char letter, char input[]){
    char *ptr = input;
    
    int frequency = 0;
    while(*ptr != '\0'){
        if(letter == *ptr){
            frequency++;
        }
        ptr++;
    }

    cout << "Frequency of " << letter << " is " << frequency << endl << endl;
}
