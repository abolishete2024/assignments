#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    while(n > 0) {
        fact = fact * n;
        n--;
    }
    return fact; 
}

int main() {
    int num, temp, digit, sum;

    for(int start = 1; start <= 1000; start++) {
        num = start;
        temp = num;
        sum = 0;

       
        while(temp > 0) {
            digit = temp % 10;
            sum = sum+factorial(digit);
            temp = temp / 10;
        }

        if(sum == num) {
            printf("%d is a Strong Number\n", num);
        }
    }

    return 0;
}
