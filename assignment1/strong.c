#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact =fact* n;
        n--;
    }
    return fact;
}

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp= num;

    while (num > 0) {
        rem = num % 10;
        sum =sum+ factorial(rem);
        num =num/ 10;
    }

    if (sum == temp)
        printf("%d is a Strong number.\n", temp);
    else
        printf("%d is not a Strong number.\n", temp);

    return 0;
}
