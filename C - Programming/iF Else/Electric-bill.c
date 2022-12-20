#include<stdio.h>
int main (){
    
    int unit ;
    printf("Enter Unit : ");
    scanf("%d", &unit);
    
    
    if (unit > 0 && unit <= 50){
        float total_bill = unit * 0.50 ;
        
        printf("TotaL bill is : %.2f",total_bill);
    } 
    
    else if (unit >50 && unit <= 150){
        
        float total = unit * 0.75 ;
        printf("Total Bill is : %.2f", total);
    }
    
    else if (unit > 150 && unit <= 250){
        
            float total02 = unit * 1.20 ;
            printf("Total Bill is : %.2f", total02);
    }
    else {
        float total03 = unit * 1.50 ;
        printf("Total Bill is : %.2f", total03);
    }
    
    return 0;
}
