#include<stdio.h>
int main(){

 	int side1;
	int side2;
	
	printf("Enter Side One :");
	scanf("%d \n", &side1);
	
	printf("Enter Side Two :");
	scanf("%d \n", &side2);
	
	
	//Formula for Area of Rectangle is = Length * width / side1 * side2 	

	int area = side1 * side2;

	printf("Area of Rectangle is : %d",area);

	return 0;
}
