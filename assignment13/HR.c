#include <stdio.h>

typedef struct HR{
    int id;
    char name[50]; 
    int salary;
    int commission;
} HR;

void  main() {
 HR arr[1];
 int i=0;
       
        printf("Enter the HR id : ");
        scanf("%d", &arr[i].id);

        printf("Enter the HR name: ");
        scanf("%s", arr[i].name); 

        printf("Enter the HR salary: ");
        scanf("%d", &arr[i].salary);
        
         printf("Enter the HR commission: ");
        scanf("%d", &arr[i].commission);
    
    
        printf("HR details are given below:");
        printf("id= %d\n", arr[i].id);
        printf("name = %s\n", arr[i].name);
        printf("salary= %d\n", arr[i].salary);
        printf("commission= %d\n", arr[i].commission);
        
       
    }
