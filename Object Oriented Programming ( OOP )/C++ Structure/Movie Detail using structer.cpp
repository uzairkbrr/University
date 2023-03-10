#include <iostream>
#include <string.h>
#include <fstream> 

using namespace std;

// Creating a structure of MovieData name ;
// Structure is blueprint  
struct MovieData{
    string title , director ;
    string released_year ;
};

//  Declaration of functions which i used for taking input & displaying output ;
MovieData createMovieData(MovieData u);
void displayMovieData(MovieData u);


int main() {

    // creating two variable fo structure ( MovieData ) ;
    MovieData movie_one , movie_two ;
    
    cout << "Movie 1 : " << endl; 
    movie_one = createMovieData(movie_one) ; // function call 
    cout << "Movie 2 : " << endl; 
    movie_two = createMovieData(movie_two) ; 


    displayMovieData(movie_one);
    cout << "_________________" << endl;
    displayMovieData(movie_two);
    cout << "_________________" << endl;
    
    return 0;
}

// The function is used for getting input for structure variable from user ;
MovieData createMovieData( MovieData u)
{
    cout << "Enter Movie Title : " ;
    fflush(stdin) ;
    getline(cin , u.title);
    
    cout << "Enter Director Name : " ;
    fflush(stdin);
    getline(cin , u.director);
    
    cout << "Enter Released Year : " ;
    fflush(stdin);
    getline(cin , u.released_year);
    
    cout << "_____________________" << endl;
    
    
    return u ; // returning structure to main where this function is called ;
}

// This function is used for displaying the data of structure variable ;
void displayMovieData(MovieData u)
{
    cout << "Movie Title : " << u.title  << endl ;    
    cout << "Movie Director  : " << u.director  << endl ;    
    cout << "Movie Released Year : " << u.released_year  << endl ;    
}