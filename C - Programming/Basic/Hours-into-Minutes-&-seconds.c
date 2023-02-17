#include<stdio.h>
int main(){
	
	int hours,minutes,seconds;
	hours = 50;

	minutes = hours * 60;
	printf("%d Hours is %d Minutes.\n", hours , minutes);
	

	seconds = hours * 3600 ;
	printf("%d Hours is %d Seconds.", hours , seconds);

	return 0;
}
