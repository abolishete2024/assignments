#include <stdio.h>

typedef struct Distance{
    int feet;
    int inches;
} Distance;

void  main() {
 Distance arr[1];
 int i=0;
       
        printf("Enter the feet: ");
        scanf("%d", &arr[i].feet);

        printf("Enter the inch: ");
        scanf("%d", &arr[i].inches); 

        printf("Distance details are given below:");
        printf("%d feet.", arr[i].feet);
        printf("%d inches", arr[i].inches);
       
    
    }
