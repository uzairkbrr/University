// Author: Uzair Ahmad

#include<iostream>
using namespace std;

class reverse
{
    // Private data members
    private:
        int number, extra_number, reverse = 0, digit;

    // Public member functions
    public:
        // Input function to take input from user
        void input();

        // Calculation function to reverse the input number
        void calc();

        // Display function to print the reverse of the input number
        void display();
};

// Function to take input from user
void rev::input()
{
    cout << "\nEnter any Positive no : ";
    cin >> number;
}

// Function to reverse the input number
void rev::calc()
{
    // Store the input number in extra_number variable to print later
    extra_number = number;

    // Loop to reverse the input number
    while (number > 0)
    {
        // Get the last digit of the input number
        digit = number % 10;

        // Multiply the reverse variable by 10 and add the last digit
        reverse = (reverse * 10) + digit;

        // Remove the last digit from the input number
        number = number / 10;
    }
}

// Function to display the reverse of the input number
void rev::display()
{
    cout << "\nReverse of [ " << extra_number << " ] is :: " << reverse << "\n";
}

int main()
{
    // Create an object of the reverse class
    reverse r;

    // Call the input function
    r.input();

    // Call the calculation function
    r.calc();

    // Call the display function to print the reverse of the input number
    r.display();

    return 0;
}