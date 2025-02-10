#include<iostream>
using namespace std;

class factorial
{
        private:
                int n, f=1;  // n is the input number, f is the factorial variable
        public:
                void input();  // function to take input from user
                void calc();  // function to calculate the factorial
                void display();  // function to display the calculated factorial
};

void factorial::input()
{
        cout<<"\nEnter any number = ";
        cin>>n;  // Take input from the user
}

void factorial::calc()
{
        for(int i=1 ; i<=n ; i++)
        {
            f *= i ; // f = f * i ;
        }
}

void factorial::display()
{
                // Display the calculated factorial
                cout<<"\nFactorial of " <<n<< " is = "<<f<<"\n";  
}

int main ()
{
        factorial f;  // Create an object of the factorial class
        f.input();  // Call the input function of the object
        f.calc();  // Call the calculation function of the object
        f.display();  // Call the display function of the object

        return 0;  
}