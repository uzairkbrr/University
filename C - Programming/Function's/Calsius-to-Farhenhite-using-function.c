#include<stdio.h>

void getfahrenhite();

int main(){
    
    
    getfahrenhite();
    
    
    return 0;
}

void getfahrenhite(){
    
    float calsius ;
    
    printf("Enter Calsius : ");
    scanf("%f", &calsius); // Getting calsius as Input from user ;
    
    float fahrenhite = (calsius * 9 / 5 ) + 32 ;
    
    printf("Fahrenhite is : %.2f", fahrenhite);
}
