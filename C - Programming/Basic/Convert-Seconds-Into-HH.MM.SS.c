#include<stdio.h>
int main(){
	
	int GivenSeconds;
	int Hour,Minute,Second;
	
	printf("Give me Seconds .");
	scanf("%d", &GivenSeconds);
	
	Hour = GivenSeconds / 3600;
	
	Minute = (GivenSeconds % 3600) / 60 ;
	
	Second = (GivenSeconds % 3600 ) % 60;
	
	printf("%d Hour, %d Minutes , %d Seconds \n", Hour , Minute , Second);
	

	
	
	return 0;
}
