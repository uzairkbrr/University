//Author: Uzair Ahmad
#include <stdio.h>

int main (){
	
	int day , month , year ;
	
	char x , y ,again = 'Y';
	
	
	int i = 0;
	for(i; i<10; i++)
	{
	    printf("Enter Your DOB in This Format DD-MM-YYYY : ");
		scanf("%d-%d-%d", &day, &month, &year);
	
	
		// if User Enter Invlid Month ;
		
		if(month > 12 || month < 1 )
		{
			printf("Invalid Month.\n");
		}
		
		// if User Enter Year Above then 2022
		
		else if(year > 2022 )
			printf("Invalid Year. \n");
			
			
		// for Month Jan ;
		
		else if(month == 1)
		{
			if(day >= 1 && day < 20)
			{
				printf("Capricorn.");
			}
			else if (day >= 20 && day <= 31)
			{
				printf("Aquaries.");
			}
			else {
				printf("Invalid Day for this January.");
			}
		}
			
		// For Month Feb ;
		
		else if(month == 2)
		{
			if(day >= 1 && day <= 18)
			{
				printf("Aquarius.");
			}
			else if(day > 18 && day <= 28)
			{
				printf("Pisces.");
			}
			else {
				printf("\nInvalid Day for this Feb.");
			}
		}
		
		// for Month March ;
		
		else if (month == 3)
		{
			if(day >= 1 && day <= 20)
			{
				printf("Pisces.");
			}
			else if(day > 20 && day <= 31)
			{
				printf("Aries.");
			}
			else {
				printf("Invalid Day for this March.");
			}
		}
		
		// for Month April ;
		
		else if(month == 4)
		{
			if(day >= 1 && day <= 19)
			{
				printf("Aries.");
			}
			else if(day > 19 && day <= 30)
			{
				printf("Taurus.");
			}
			else {
				printf("Invalid Day for this April.");
			}
		}
		
		// for Month May ;
		
		else if(month == 5)
		{
			if(day >= 1 && day <=20)
			{
				printf("Taurus.");
			}
			else if(day > 20 && day <= 31)
			{
				printf("Gemini.");
			}
			else 
			{
				printf("Invalid Day for May");
			}
		}
		
		// for Month June ;
		
		else if(month == 6)
		{
			if(day >= 1 && day <= 20)
			{
				printf("Gemini.");
			}
			else if(day > 20 && day <= 30)
			{
				printf("Cancer.");
			}
			else {
				printf("Invalid Day for June.");
			}
		}
		
		// for Month July ;
		
		else if(month == 7)
		{
			if(day >= 1 && day <=22)
			{
				printf("Cancer.");
			}
			else if(day > 22 && day <= 31)
			{
				printf("Leo.");
			}
			else {
				printf("Invalid Day for July.");
			}
		}
		
		
		// for Month August ;
		
		else if(month == 8)
		{
			if(day >= 1 && day <= 22)
			{
				printf("Leo.");
			}
			else if(day > 22 && day <= 31)
			{
				printf("Virgo.");
			}
			else {
				printf("Invalid Day for August.");
			}
		}
		
		// for Month September ;
		
		else if(month == 9)
		{
			if(day >= 1 && day <= 22)
			{
				printf("Virgo.");
			}
			else if(day > 22 && day <= 30)
			{
				printf("Libra.");
			}
			else
			{
				printf("Invalid Day for September.");
			}
		}
		
		// for Month October
		
		else if(month == 10)
		{
			if(day >= 1 && day <= 22)
			{
				printf("Libra.");
			}
			else if(day > 22 && day <= 31)
			{
				printf("Scorpio.");
			}
			else {
				printf("Invalid Day for October.");
			}
		}
		
		// for Month November ;
		
		else if( month == 11)
		{
			if(day >= 1 && day <= 21)
			{
				printf("Scorpio.");
			}
			else if ( day > 21 && day <= 30)
			{
				printf("Sagittarius.");
			}
			else {
				printf("Invalid Day for November.");
			}
		}
		
		
		// for Month December ;
		
		else if(month == 12)
		{
			if(day >= 1 && day <= 21)
			{
				printf("Sagittarius.");
			}
			else if( day > 21 && day <= 31)
			{
				printf("Capricorn.");
			}
			else {
				printf("Invalid Day for December.");
			}
		}
	
	
	
		printf("\nWanna Check Zodiac Sign again ? Y/N : ");
		scanf(" %c", &again);
		
		if(again == 'y' || again == 'Y') continue;
		
		else break;
		
	}
	return 0 ;
}