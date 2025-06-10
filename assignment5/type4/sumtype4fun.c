#include <stdio.h>
int sum(int, int);
void main() {
    int no1, no2;
    printf("Enter no1 and no2:\n");
    scanf("%d %d", &no1, &no2);
    sum(no1, no2);
}

int sum(int no1, int no2) {
    int res = no1 + no2;
    printf("Sum: %d\n", res);
    return res;
}
