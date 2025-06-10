#include <stdio.h>
void sum(int, int);
void main() {
    int no1, no2;
    printf("Enter no1 and no2:\n");
    scanf("%d %d", &no1, &no2);
    sum(no1, no2);
}

void sum(int no1, int no2) {
    int res = no1 + no2;
    printf("Sum: %d\n", res);
}
