#include <stdio.h> 
int main() {
    int num, i = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    while(i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    
}
