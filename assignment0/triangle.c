#include<stdio.h>
#include<conio.h>
int main(){
    float b,h,area;
    printf("Enter the value of b and h:");
    scanf("%f%f",&b,&h);
    area=0.5*b*h;
    printf("area of a triangle is=%.2f",area);
    getch();
    return 0;
}
