#include <stdio.h>

typedef struct Student {
    int rollno;
    char name[50]; 
    int marks;
} Student;

void  main() {
Student arr[1];
int i=0;
        printf("Enter the Roll no: ");
        scanf("%d", &arr[i].rollno);

        printf("Enter the student name: ");
        scanf("%s", arr[i].name); 

        printf("Enter the student marks: ");
        scanf("%d", &arr[i].marks);
    
        printf("Student details are given below:");
        printf("rollno= %d\n", arr[i].rollno);
        printf("Name = %s\n", arr[i].name);
        printf(" marks= %d\n", arr[i].marks);
        
       
    }
