//Author: Uzair Ahmad

#include<stdio.h>

int main(){
	
	float weight, distance = 0, price = 0 ;
	
	// take user input for package weight
	printf("Enter Weight : ");
	scanf("%f", &weight);
	
	// check if package weight is within acceptable range
	if(weight < 0 || weight > 20)
	{
		printf("\nSorry !");
		printf("\nWeight Can't be Negative, Zero or Greater than 20.\n");
	}
	else 
	{	
		// take user input for delivery distance
		printf("Enter Distance : ");
		scanf("%f", &distance);
		
		// check if delivery distance is within acceptable range
		if(distance < 0)
		{
			printf("\nDistance must be greater than Zero. ! \n");
		}
		else if(distance < 10 || distance > 3000)
		{
			printf("\nTcs Does not Deliver to such Distance.\n");
		}
		else if (weight <= 2)
		{
			// calculate the delivery charges based on the weight and distance of the package
			price = distance * (1.10 / 500.0) ;		
			
			// print the total charges for the package delivery
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price );
		}
		else if (weight > 2 && weight <= 6 )
		{
			// calculate the delivery charges based on the weight and distance of the package
			price = distance * (2.20 / 500.0);
			
			// print the total charges for the package delivery
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
		}
		else if(weight > 6 && weight <= 10)
		{
			// calculate the delivery charges based on the weight and distance of the package
			price = distance * (3.70 / 500.0);
			
			// print the total charges for the package delivery
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
		}
		else if(weight > 10 && weight < 20)
		{	
			// calculate the delivery charges based on the weight and distance of the package
			price = distance * (4.80 / 500.0);
			
			// print the total charges for the package delivery
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
		}
	}
	
	return 0;

}