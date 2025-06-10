#include <stdio.h>

int main() {
    double r, area;
    printf("Enter the radius: ");
    if (scanf("%lf", &r) == 1) {
        printf("You entered: %.2lf\n", r);
        area = 3.14 * r * r;
        printf("Area = %.2lf\n", area);
    } else {
        printf("Invalid input!\n");
    }
    
    getch();
    return 0;
}
