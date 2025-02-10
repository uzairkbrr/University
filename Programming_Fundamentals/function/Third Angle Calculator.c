//Author: Uzair Ahmad

#include<stdio.h>

float get3rdangle(float x, float y);

int main(){
    
    float angle1 , angle2 ;
    
    printf("Enter First Angle => ");
    scanf("%f", &angle1);
    
    printf("Enter Second Angle => ");
    scanf("%f", &angle2);
    
	// Call get3rdangle() function and store the result in a variable
	float result = get3rdangle(angle1 , angle2);
	
	// Print the result
	printf("\n\nThird Angel is %.0f", result);

    return 0;
}

// Function definition
float get3rdangle(float x, float y){

	// Calculate the third angle and directly return it 

	return (180 - (x + y)) ;

}
