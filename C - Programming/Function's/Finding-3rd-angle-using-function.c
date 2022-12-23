#include<stdio.h>

float get3rdangle(float x, float y);

int main(){
    
    float angle1= 60.1, angle2=69.9 ;
    
    float result = get3rdangle(angle1 , angle2);
    
    printf("%f", result);
    
    return 0;
}

float get3rdangel(float x, float y){

    float angle3 = 180 - (x + y) ;
    
    return angle3 ;

}
