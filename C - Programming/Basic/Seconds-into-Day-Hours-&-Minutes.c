#include<stdio.h>
int main(){

	float seconds = 86400;

	int minute = seconds / 60;
	printf(" %.0f Seconds is %d Minutes. \n", seconds , minute);

	int Hours = seconds / (3600);
	printf(" %d seconds is %d Hours. \n", seconds , Hours);

	// First to change Seconds into Minutes Then Minutes into Hours Then Hours into Day . eg (60 * 60 * 24).

	int day = seconds / (60*60*24);
	printf(" %.0f seconds is %d day. ", seconds , day);

	return 0;
}
