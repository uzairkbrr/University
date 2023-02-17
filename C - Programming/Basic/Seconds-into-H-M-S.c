#include<stdio.h>
int main(){
    
    int seconds ;
    
    printf("Enter Seconds : ");
    scanf("%d", &seconds);
    
    int hours = seconds / 3600 ;
    
    int mints = ( seconds % 3600 ) / 60 ;
    
    int sec = ( (seconds % 3600) % 60 ) % 60 ;
    
    printf("H:M:S - %d:%d:%d", hours , mints , sec);
    
    return 0;
}
