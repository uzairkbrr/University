#include <iostream>
using namespace std;

// Rules of Class declaration 

// class keyword is compulsary for creating class in c++ ; 
// ClassName will be anything (just a random name ) ;
class area_of_rectangle{
    
    private:
    int width , length ;
    
    public:
    
    // Default Constructer 
    area_of_rectangle(){
        
        length = 0 ;
        width = 0 ;
    }
    
    // constructer with parameters 
    area_of_rectange(int l , int w){
        length = l;
        width = w;
    }
    
    // creating getters ;
    int get_length(){
        return length ;
    }
    
    int get_width(){
        return width;
    }
    
    // creating setters ;
    void set_length(int l){
        length = l ;
        // cout << "Length : " << length << endl;
    }
    
    void set_width(int w){
        width = w ;
        // cout << "Width : " << width << endl;
    }
    
    int calculate_area(){
        return (length * width) ;
    }
    
};

int main() {
    
    int length , width ;
    
    cout << "Enter Length : " ;
    cin >> length ;
    cout << "Enter Width : " ;
    cin >> width ;
    
    // creating object for class ;
    area_of_rectangle r1 ;
    
    r1.set_length(length);
    r1.set_width(width);
    
    cout << "Area of Rectangle : " << r1.calculate_area() << endl;
    cout << "Length of Rectangle : " << r1.get_length() << endl ;
     
    return 0;
}