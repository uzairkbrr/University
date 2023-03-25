// Author: Uzair Ahmad 

#include<iostream>
using namespace std;

// defining a class named "largest"
class largest
{
    // private variables x, y, and z
    private:
        int x,y,z;
    
    // public member functions
    public:
    
    // function to take input from the user
    void input()
    {
        cout << "\nEnter 1st number : ";
        cin >> x;
        cout << "\nEnter 2nd number : ";
        cin >> y;
        cout << "\nEnter 3rd number : ";
        cin >> z;
    }

    // function to calculate and display the largest number
    void calc()
    {
        int r;
        
        // using if-else statements to find the largest number
        if (x > y && x > z) 
        {
            r = x;
        }
        else if (y > x && y > z) 
        {
            r = y;
        }           
        else {
            r = z;
        }      
        
        // displaying the largest number
        cout<<"\nThe Largest Number among [ "<<x<<", "<<y<<", "<<z<<" ] = "<<r<<"\n";
    }
};

int main()
{
    // creating an object of the class "largest"
    largest num;
    
    // calling the input function of the class
    num.input();

    // calling the calculation function of the class
    num.calc();

    return 0;
}