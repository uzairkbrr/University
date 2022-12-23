#include <stdio.h>

void calculateAttendance(int x , float y);

int main() {
    
    int schedule_classes ;
    float attend_classes ;
    
    printf("Enter total classes scheduled : ");
    scanf("%d", &schedule_classes);
    
    printf("Enter total classes attended : ");
    scanf("%f", &attend_classes);
    
   calculateAttendance(schedule_classes , attend_classes );
    
    return 0;
}

void calculateAttendance(int x , float y){

   
    
    float avg = ( y / x ) * 100 ;
    
    if ( avg >= 80){ 
        
        printf(" Your attendance is : %.2f \n", avg);
        printf("You are allowed to sit in the exam.");
        
    }
    
    else {
        
        printf("Your attendance is : %.2f  \n", avg);
         printf("You are not allowed to sit in the exam.");
        
    }
}