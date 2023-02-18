#include <iostream>
#include <fstream>

using namespace std;

// struct is keyword of struter ;
// "point" is the name for structer (You can name it anything) ;

// How to make array from structer ;
struct student{
    // All of the below is members of the structer ;
    string name ;
    float gpa ;
    int marks ;
};

// All the above process is called declaration of structer ;

int main() {
   
   // array from structer ;
   student s[3] ; // we want to keep the size of array maintain ;
   
   for(int i=0 ; i < 3 ; i++)
   {
       cout << "_______________________" << endl; 
       cout << "Enter Your Name : " ;
       
       fflush(stdin);
       getline(cin, s[i].name) ;
       
       cout << "Enter Your GPA : " ;
       cin >> s[i].gpa ;
       
       cout << "Enter Your Marks : " ;
       cin >> s[i].marks ;
   }
   
   cout << "_______________________" << endl; 
   
   for(int i=0 ; i<3 ; i++)
   {
       cout << i+1 << ".Name : " << s[i].name << endl;
       cout  << " GPA : " << s[i].gpa << endl;
       cout << " Marks : " << s[i].marks << endl;
       
       cout << "_______________________" << endl; 
   }
   
   
                                 
    return 0;
}