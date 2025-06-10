#include <stdio.h>

void isprime(int*);

void main() {
    int num; 
    isprime(&num);

}

void isprime(int* num) {
    int i = 2, flag = 0;
    
    printf("Enter the value of number:\n");
    scanf("%d",num); 

    if (*num < 2) {
        flag = 1; 
    }

    while (i <= (*num) / 2) {
        if ((*num) % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0) {
        printf("%d is prime\n", *num);
    } else {
        printf("%d is not prime\n", *num);
    }
}
