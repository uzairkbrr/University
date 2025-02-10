//Author: Uzair Ahmad

#include<stdio.h>

void getfahrenhite();

int main(){
    
    // We call the "getfahrenhite" function to get the temperature in Fahrenheit and display it to the user.
	getfahrenhite();
	
	return 0;
}

void getfahrenhite(){
    
	 // We declare a variable named "celsius" to hold the user input of temperature in Celsius.
	float celsius ;
	
	// We prompt the user to enter the temperature in Celsius and read their input using scanf.
	printf("Enter Celsius : ");
	scanf("%f", &celsius); // Getting Celsius as input from user.
	
	// We calculate the temperature in Fahrenheit using the conversion formula and store it in a variable named "fahrenhite".
	float fahrenhite = (celsius * 9 / 5 ) + 32 ;
	
	// We display the temperature in Fahrenheit to the user using printf.
	printf("Fahrenheit is : %.2f", fahrenhite);

}
