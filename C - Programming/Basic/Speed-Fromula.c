#include<stdio.h>
int main(){
	
	int ali_distance;  // Distance in km ;s
	printf("Enter ALI Distance in Km : ");
	scanf("%d", &ali_distance);
	
	int ali_time;      // Time in Hours ;
	printf("Enter Time in Hours : ");
	scanf("%d", &ali_time );
	
	int ali_time01;  // Time in Minutes ;
	printf("Enter Time in Minute : ");
	scanf("%d", &ali_time01);
	
	
	int ali_seconds =  ( ali_time * 60 + ali_time01 ) * 60 ; // Time Converted from Hours & Minutes to Seconds ;
	
	float ali_distance_meter = ali_distance * 1000 ;       // 1 km is Equal to 1000 meter ;
	
	float ali_speed = ali_distance_meter / ali_seconds ; // Speed = Distance / Time ;

	printf("Speed of ALi is : %.2f m/s \n \n", ali_speed);
	
	
	
	
	// Now Write Code for Haider Speed .
	
	int haider_distance; // Distance in km ;
	printf("Enter Distance in km : ");
	scanf("%d", &haider_distance);

	int haider_time;     // Time in Hours ;
	printf("Enter Time in Hours : ");
	scanf("%d", &haider_time);
	
	int haider_time01; // Time in Minutes ;
	printf("Enter Time in Minutes : ");
	scanf("%d", &haider_time01);
	
	
	int haider_seconds = ( haider_time * 60 + haider_time01 ) * 60 ; // Time Converted from Hours & Minutes to Seconds ;
	
	float haider_distance_meter = haider_distance * 1000 ; // 1 Km is Equal to 1000 meter ;
	
	float haider_speed = haider_distance_meter / haider_seconds ;  // Speed = Distance / Time ;
	
	printf("Speed of Haider is : %.2f m/s", haider_speed);
	
	return 0;
}
