#include<stdio.h>

int main() {
    double Fah, Cel;

    printf("Enter the value of Celsius: ");
    scanf("%lf", &Cel);

    Fah = (Cel * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit = %.2lf\n", Fah);

    return 0;
}
