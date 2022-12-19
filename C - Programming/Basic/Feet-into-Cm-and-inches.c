#include<stdio.h>
int main(){

	int feet;

	printf("Enter Feet : ");
	scanf("%d",&feet);
	// 1 Feet = 12 inches that's why we use feet * 12 formula below

	int inches = feet * 12;

	printf("%d Feet is %d Inches. \n", feet , inches);

	// Now Feet to cm.
	
	// 1 Feet = 30 cm That's why we use feet * 30 formula below. 
	int cm  = feet * 30;

	printf("%d Feet is %d Centi Meters", feet ,cm);

	return 0;
}
