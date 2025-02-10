//Author: Uzair Ahmad

#include<stdio.h>
int main(){
	
	int uzairDistance;  // Distance in km ;
	printf("Enter Uzair Distance in Km : ");
	scanf("%d", &uzairDistance);
	
	int uzairTime;      // Time in Hours ;
	printf("Enter Time in Hours : ");
	scanf("%d", &uzairTime);
	
	int uzairTime01;    // Time in Minutes ;
	printf("Enter Time in Minute : ");
	scanf("%d", &uzairTime01);
	
	int uzairSeconds = (uzairTime01 * 60 ) + uzairTime ; // Time Converted from Minutes & Hours to Hours ;
	float uzairSpeed = uzairDistance / uzairSeconds ;  // Speed = Distance / Time ;
	
	printf("Speed of Uzair is : %.2f km/h \n", uzairSpeed);
	
	return 0;
}
