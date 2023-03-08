#include <iostream>

using namespace std;

// Function to set time for a student
void set_time(int hour, int mint, int sec);

// Class to represent time
class time {
    private:
        int hour, mint, sec;

    public:
        // Constructor to set default values to 0 for hour, minute, and second
        // This constructor is optional since it is not used in the program
        time(int hour = 0, int mint = 0, int sec = 0) {
            // Setting values to this constructor through this function
            set_time(hour, mint, sec);

            // Alternatively, we can assign values to these variables directly, but it would be redundant
            // since we would need to make copy variables for every single private variable in the constructor
            // this->hour = hour;
            // this->mint = mint;
            // this->sec = sec;
        }

        // Setter function to set time for a student
        void set_time(int hour, int mint, int sec) {
            this->hour = hour;
            this->mint = mint;
            this->sec = sec;
        }

        // Getter functions to get the hour, minute, and second values separately
        void get_hour() {
            cout << this->hour;
        }

        void get_mint() {
            cout << this->mint;
        }

        void get_sec() {
            cout << this->sec;
        }
};

int main() {
    // Creating an array of 50 students
    time student[50];

    int hr, mint, sec, x;
    char add_again, check_again;

    // Loop to add student entries
    do {
        cout << endl;
        cout << "Which Student Entry do you want to Add !" << endl;
        cout << "Student Roll No: (1 - 50) => ";
        cin >> x;

        cout << endl;
        cout << "Enter Hour : ";
        cin >> hr;
        cout << "Enter Minute : ";
        cin >> mint;
        cout << "Enter Second : ";
        cin >> sec;

        // Setting time for the student
        student[x-1].set_time(hr, mint, sec);

        cout << endl;
        cout << "Want to enter another student Entry ? Y/N : ";
        cin >> add_again;

        // Loop will continue until the user enters 'n' or 'N'
    } while (add_again == 'y' || add_again == 'Y');

    cout << "---------------------------------" << endl;

    // Loop to check student entries
    do {
        cout << endl;
        cout << "Which Student Entry do you want to Check !" << endl ; 
		cout << "Enter Roll No :  (1 - 50) => ";
        cin >> x;

        // Displaying the hour, minute, and second values for the student
        cout << "Hour : ";
        student[x-1].get_hour(); cout<< endl;
        cout << "Minute : ";
        student[x-1].get_mint(); cout<< endl;
        cout << "Second : ";
        student[x-1].get_sec(); cout<< endl;

        cout << endl;
        cout << "Want to check another student Entry ? Y/N : ";
        cin >> check_again;

        // Loop will continue until the user enters 'n' or 'N'
    } while (check_again == 'Y' || check_again == 'y');

    cout << "Thank's for using our program!" << endl;

    return 0;
}