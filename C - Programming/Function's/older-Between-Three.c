#include <stdio.h>

void Age(int x , int y , int z);
int main() {

    int Amir , Ali , Haider ;
    
    printf("Enter Age of Amir : ");
    scanf("%d", &Amir);
    printf("Enter Age of Ali : ");
    scanf("%d", &Ali);
    printf("Enter Age of Haider : ");
    scanf("%d", &Haider);

    Age(Amir,Ali,Haider);
    
    return 0;
}

void Age(int x , int y , int z){
    
    if ( x == y && y == z){
        printf("Age of Amir , ALi & Haider is Same.");
    }
    else if ( x > y && x > z ){
        printf("Eldest : Amir");
    }
    else if ( y > x && y > z){
        printf("Eldest : Ali ");
    }
    else if ( z > x && z > y)  {
        printf("Eldest : Haider ");
    }
    else if (x == y || y == x && x > z) {
        printf("Amir & Ali is Elder");
        printf(" & also Age of Amir & Ali is Same . " );
        
    }
    else if ( x == z || z == x && x > y){
        printf("Amir & Haider is Elder");
        printf(" & also Age is Amir & Haider is Same.");
    }
    else if ( y == z || z == y && y > x){
        printf("Ali & Haider is Elder");
        printf(" & also Age of Ali & Haider is Same.");
    }
    
}