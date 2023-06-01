//Author: Uzair Ahmad

#include <stdio.h>

void calculateAttendance(int x , float y);

int main() {
    
    // We declare two variables to hold the user input for total scheduled classes and total attended classes.
	int schedule_classes ;
	float attend_classes ;
	
	// We prompt the user to enter the total scheduled classes and read their input using scanf.
	printf("Enter total classes scheduled : ");
	scanf("%d", &schedule_classes);
	
	// We prompt the user to enter the total attended classes and read their input using scanf.
	printf("Enter total classes attended : ");
	scanf("%f", &attend_classes);
	
	// We call the "calculateAttendance" function with the total scheduled classes and total attended classes as parameters.
	calculateAttendance(schedule_classes , attend_classes );
	
	return 0;

}

void calculateAttendance(int x , float y){

  // We calculate the attendance percentage by dividing the total attended classes by total scheduled classes and then multiplying by 100.
	float avg = ( y / x ) * 100 ;
	
	// We use an if-else statement to check if the attendance percentage is greater than or equal to 80%.
	if ( avg >= 80)
	{     
	    // If the attendance percentage is greater than or equal to 80%, we inform the user that they are eligible to sit in the exam.
	    printf("Your attendance is : %.2f \n", avg);
	    printf("You are allowed to sit in the exam.");  
	}
	else
	{
	    // If the attendance percentage is less than 80%, we inform the user that they are not eligible to sit in the exam.
	    printf("Your attendance is : %.2f  \n", avg);
	    printf("You are not allowed to sit in the exam.");
	}

}