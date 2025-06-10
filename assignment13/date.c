#include <stdio.h>

typedef struct Date{
    int date;
    int month;
    int year;
} Date;

void  main() {
 Date arr[1];
 int i=0;
       
        printf("Enter the date: ");
        scanf("%d", &arr[i].date);

        printf("Enter the month: ");
        scanf("%d", &arr[i].month); 

        printf("Enter the year: ");
        scanf("%d", &arr[i].year);
    
        printf("Date details are given below:");
        printf(" %d/", arr[i].date);
        printf(" %d/", arr[i].month);
        printf(" %d", arr[i].year);
       
        
       
    }
