#include <stdio.h>

typedef struct Salesmanager{
    int id;
    char name[50]; 
    int salary;
    int incentive;
    int target;
} Salesmanager;

void  main() {
 Salesmanager arr[1];
 int i=0;
       
        printf("Enter the id : ");
        scanf("%d", &arr[i].id);

        printf("Enter the name: ");
        scanf("%s", arr[i].name); 

        printf("Enter the  salary: ");
        scanf("%d", &arr[i].salary);
        
         printf("Enter the incentive: ");
        scanf("%d", &arr[i].incentive);
        
         printf("Enter the target: ");
        scanf("%d", &arr[i].target);
    
    
        printf("Salesmanager details are given below:");
        printf("id= %d\n", arr[i].id);
        printf("name = %s\n", arr[i].name);
        printf("salary= %d\n", arr[i].salary);
        printf("incentive= %d\n", arr[i].incentive);
        printf("target= %d\n", arr[i].target);
        
       
    }
