// Author: Uzair Ahmad 

#include<iostream>
using namespace std;

// Defining a class "date" to hold the date values.
class date
{
    private:
        int dd,mm,yyyy; // Private member variables to hold day, month and year.
    public:
        // Public member functions to input and display the date.
        void input(); 
        void display();
        
};

// Member function to input the date values.
void date::input()
{
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yyyy;
}

// Member function to display the date in dd/mm/yyyy format.
void date::display()
{
    cout<<"Today's Date in dd/mm/yyyy format:"<<dd<<"/"<<mm<<"/"<<yyyy;
}

int main()
{
    date d; // Creating an object of class "date".
    
    d.input(); // Calling the input member function to input the date values.
    d.display(); // Calling the display member function to display the date in dd/mm/yyyy format.

    return 0;
}