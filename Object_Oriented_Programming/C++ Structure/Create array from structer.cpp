#include <iostream>
using namespace std;

// struct is keyword of struter ;
// "point" is the name for structer (You can name it anything) ;

// How to make array from structer ;
struct point{
    // All of the below is members of the structer ;
    int one , two ;
};

// All the above process is called declaration of structer ;

int main() {
   
   // array from structer ;
   point array[10] ; // we want to keep the size of array maintain ;
   
   array[0].one = 5 ;
   array[0].two = 8 ;
   
   cout << array[0].one << endl << array[0].two << endl ;
   
   
                                 
    return 0;
}