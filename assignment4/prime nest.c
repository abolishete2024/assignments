#include <stdio.h>

void main() {
    int num, start, count=0,sum=0,i;

    printf("Prime numbers between 1 and 100 are:\n");

    for (num = 2; num <= 100; num++) {
        count = 0;

        for (start = 1; start<= num; start++) {
            if (num % start == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d\n ", num);
        }
        sum=sum+i;
        
    }


}
