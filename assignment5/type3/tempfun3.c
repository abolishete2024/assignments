#include<stdio.h>
float fahs(float,float);

void main() {
    double fah, cel;
printf("Enter the value of Celsius: ");
    scanf("%lf", &cel);
    fahs(cel,fah);
}
float fahs(float cel,float fah){

    fah = (cel * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit = %.2lf\n", fah);

     return (cel * 9.0 / 5.0) + 32.0;
}
