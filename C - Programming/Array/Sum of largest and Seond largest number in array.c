#include <stdio.h>

int main() {

    int size =10;
    int array[size] ;
    
    printf("Enter Values for Array :- \n");
    for(int i=0;i<size;i++)
    {
        printf("index no [%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    int largest = array[0];
    int second_largest = largest;
    
    for(int i=0;i<size;i++)
    {
        if(largest < array[i])
        {
             second_largest = largest;
             largest = array[i];
        }
        
        if(second_largest < array[i] && largest > array[i])
        {
            second_largest = array[i];
        }
    }
    
    printf("largest Element in Array => %d\n",largest);
    printf("Second largest Element in Array => %d\n",second_largest);
    printf("Sum of Largest and Second Largest element is => %d",largest+second_largest);

    return 0;
}