#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact= fact*i;
    }
    return fact;
}
void main() {
    printf("Strong Numbers between 1 and 10000 are:\n");
    
    for(int num = 1; num <= 10000; num++) {
        int sum = 0, temp = num;
        
        while(temp > 0) {
            int digit = temp % 10;
            sum =sum+ factorial(digit);
            temp /= 10;
        }

    
        if(sum == num) {
            printf("%d\n", num);
        }
    }
    
}
