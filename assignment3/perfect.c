#include <stdio.h>

void main() {
    int i=1, sum = 0, num;

    printf("Enter the number:\n");
    scanf("%d", &num);

    while(i<=num/2){
        if(num %i==0){
                sum=sum+i;
            }
            i++;}

    if (sum == num) {
        printf("The number %d is a perfect number.\n", num);
    } else {
        printf("The number %d is not a perfect number.\n", num);
    }
}
