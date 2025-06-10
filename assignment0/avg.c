#include <stdio.h>
int main() {
    double n1, n2, n3, n4, n5, sum, avg;
    
    printf("Enter five numbers: ");
    scanf("%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5);
    
    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5.0;
    
    printf("Average of these five numbers is = %.2lf\n", avg);
    
 return 0;
}
