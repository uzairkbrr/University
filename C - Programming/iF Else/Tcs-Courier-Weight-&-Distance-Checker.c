#include<stdio.h>

int main(){
	
	float weight , distance =0 , price =0 ;
	
	printf("Enter Weight : ");
	scanf("%f", &weight);
	
	
	
	if( weight < 0 || weight > 20)
	
	{
		
		printf("\nSorry !");
		printf("\nWeight Can't be Negative , Zero or Greater than 20.\n");

	}
	
	else {
		
		printf("Enter Distance : ");
		scanf("%f", &distance);
		
		if(distance < 0){
			printf("\nDistance must greater than Zero. ! \n");
		}
		
		else if(distance < 10 || distance > 3000)
		
		{
			printf("\nTcs Does not Deliver to such Distance.\n");
		}
		
		else if ( weight <= 2)
		
		{
			price = distance * (1.10/500.0) ;		
			
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price );
			
		}
		
		else if ( weight > 2 && weight <= 6 )
		
		{
			price = distance * (2.20/500.0);
			
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
		}
		
		else if(weight > 6 && weight <= 10)
		
		{
			price = distance * (3.70/500.0);
			
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
			
		}
			
		else if(weight > 10 && weight < 20)
		
		{	
			price = distance * (4.80/500.0);
			
			printf("Thank You !\n");
			printf("Total Charges : %.3f$\n", price);
			
		}

	}

	return 0;
}