#include <stdio.h>

typedef struct Admin {
    int id;
    char name[50]; 
    float salary;
    int allowance;
} Admin;

void  main() {
Admin arr[1];
int i=0;
        printf("Enter the admin id: ");
        scanf("%d", &arr[i].id);

        printf("Enter the admin name: ");
        scanf("%s", arr[i].name); 

        printf("Enter the admin salary: ");
        scanf("%f", &arr[i].salary);

        printf("Enter the admin allowance: ");
        scanf("%d", &arr[i].allowance);
    
        printf("Admin details are given below:");
        printf("ID = %d\n", arr[i].id);
        printf("Name = %s\n", arr[i].name);
        printf("Salary = %.2f\n", arr[i].salary);
        printf("Allowance = %d\n", arr[i].allowance);
       
    

}
