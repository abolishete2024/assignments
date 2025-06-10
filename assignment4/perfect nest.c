#include <stdio.h>

int main() {
    int num, start,end, sum;
    for (num = 1; num <= 1000; num++) {
        sum = 0;

        for (start = 1; start < num; start++) {
            if (num % start == 0) {
                sum = start+sum;
            }
        }
        if (sum == num) {
            printf("%d is a Perfect Number\n", num);
        }
    }

    return 0;
}
