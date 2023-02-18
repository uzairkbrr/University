#include <iostream>
using namespace std;

// struct is keyword of struter ;
// "employee" is the name for structer (You can name it anything) ;

struct employee{
    // All of the below is members of the structer ;
    string name ; 
    int id ;
    double work_hour , salary ;
};

// All the above process is called declaration of structer ;

int main() {
   
   // creating variable for employee structer ;
    employee employe_one , employe_two ; // e1 & e2 is called structer vairables ;
    
    employe_one.name = "Uzair" ; // assigning name to empolye_one ;
    // " . " operator is used to access any member of the structer ;
    employe_one.id = 9021 ;
    employe_one.work_hour = 50 ; 
    employe_one.salary = work_hour * 50 ;
    
    employe_two.name = "Abid" ; 
    employe_two.id = 9053 ;
    employe_two.work_hour = 2 ; 
    employe_two.salary = work_hour * 50 ;
                                 
    return 0;
}