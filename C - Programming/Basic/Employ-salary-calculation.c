#include<stdio.h>
int main (){
    
    int id;
    int hours;
    int salary;
    
    printf("Enter Employ id : " );
    scanf("%d", &id );
    
    if (id >= 100000){
    	
        printf("Please , Enter Valid id .");
        
    }
    
    else {
    	
        printf("Enter Worked Hour's : ");
        scanf("%d", &hours);
        
        printf("Enter Salary Rate : ");
        scanf("\n %d", &salary);
        
         int Money = hours * salary ;
         
        printf("Your Salary is : %d \n", Money);
    
        printf("Thanks For Visiting.");
    }
    
    printf(" \nThanks For Your Copration ! ");
    
    return 0;
}

