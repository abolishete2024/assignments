#include <stdio.h>

typedef struct Time{
    int hour;
    int minutes;
    int seconds;
} Time;

void  main() {
 Time arr[1];
 int i=0;
       
        printf("Enter the hour: ");
        scanf("%d", &arr[i].hour);

        printf("Enter the minutes: ");
        scanf("%d", &arr[i].minutes); 

        printf("Enter the seconds: ");
        scanf("%d", &arr[i].seconds);
    
        printf("Date details are given below:");
        printf(" %d. hour", arr[i].hour);
        printf(" %d.minutes", arr[i].minutes);
        printf(" .%d seconds", arr[i].seconds);
       
        
       
    }
