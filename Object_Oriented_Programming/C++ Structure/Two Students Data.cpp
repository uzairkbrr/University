#include <iostream>
#include <string.h>
// #include <fstream>

using namespace std;

struct student {
    string name ;
    int marks[3];
};

// Declaration of functions 
void Display_data(student s);
void Change_marks(student x);
void Calc_Average_Marks(student y);

int main() {
    
    int option , student_number , course_number , updated_marks ;
    
    // creating variables of student structure ;
    student student_one, student_two ;
    
    cout << "Enter Student Name : " ;
    fflush(stdin);
    getline(cin , student_one.name);
    
    for(int i=0 ; i<3 ;i++)
    {
        cout << "Marks for course " << i+1 << " = " ;
        cin >> student_one.marks[i] ;
    }
    
    cout << "__________________________" << endl;
    
    cout << "Enter Student Name : " ;
    fflush(stdin);
    getline(cin , student_two.name);
    
    for(int i=0 ; i<3 ;i++)
    {
        cout << "Marks for course " << i+1 << " = " ;
        cin >> student_two.marks[i] ;
    }
    
    
    do{
        
        cout << "__________________________" << endl;
        
        cout << " . . . M E N U . . .  " << endl;
        cout << "1. Display student Data." << endl;
        cout << "2. Calculate Average Marks." << endl;
        cout << "3. Change Marks ." << endl;
        cout << "4. Exit." << endl;
        
        cout << endl << "Please Select an option : " ;
        cin >> option ;
        
        if(option == 1)
        {
             Display_data(student_one);
             Display_data(student_two);
        }
        else if(option == 2)
        {
            cout << "Enter Student No : " ;
            cin >> student_number ;
            
            if( student_number == 1)
            {
                Calc_Average_Marks(student_one);
            }
            else 
            {
                Calc_Average_Marks(student_two);
            }
        }
        else if(option == 3)
        {
            cout << "Enter Student No (1-2) : " ;
            cin >> student_number ;
            
            cout << "Enter Course no to change marks (1-3) : " ;
            cin >> course_number ;
                
            cout << "Enter the updated marks : " ;
            cin >> updated_marks ;
            
            if(student_number == 1)
            {
                student_one.marks[course_number-1] = updated_marks ;
            }
            else 
            {
                student_two.marks[course_number-1] = updated_marks ;
            }
            
        }
        
        
    }while(option != 4);
    
    cout << "Thanks for using our program !" << endl;

    return 0;
}

void Display_data(student s)
{
    cout << "Name : " << s.name << endl;
    
    for(int i=0 ; i<3 ; i++ )
    {
        cout << "Marks for Course : " << i+1 << " = " << s.marks[i] << endl;
    }
}

void Change_marks(student &x)
{
    int course_no , updated_marks;
    
    cout << "Enter Course no to change the marks : " ;
    cin >> course_no ;
    
    cout << "Enter the updated marks : " ;
    cin >> updated_marks ;
    
    x.marks[course_no-1] = updated_marks ;
}

void Calc_Average_Marks(student y)
{
    int sum = 0;
    
    for(int i=0 ; i<3 ; i++)
    {
        sum += y.marks[i];
    }
    
    float average = sum / 3.0 ;
    
    cout << "Average Marks : " << average << endl;
}

