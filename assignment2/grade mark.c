#include<stdio.h>
void main()
{
int marks;
printf("enter the marks of a student:\n");
scanf("%d",&marks);
if(marks>75){
    printf("student is in distinction");
}
else if(marks>65){
    printf("student is in first class");
}
 else if(marks>55){
    printf("student is in second class");
}
else if(marks>40){
    printf("student is in pass class");
}
else if(marks<40){
    printf("student is in fail class");
}
else{
    printf("invalid marks");
}
}