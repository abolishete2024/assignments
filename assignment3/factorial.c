#include<stdio.h>
void main() {
    int num, fact = 1;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    int temp = num; 
    while(num) {
        fact=fact* num;
        num--;
    }
 printf("Factorial of %d is %d\n", temp, fact);
}
