#include <stdio.h>
int digits(int num);
void main() {
	int num,sum;
printf("Enter a number: ");
    scanf("%d", &num);
  int x=digits(num);
  printf("sum is %d",x);  
    
}
int digits(int num)
{
	
int temp, firstDigit, lastDigit;
    temp = num;
    lastDigit = temp % 10;

    while (temp > 10) {
        temp = temp / 10;
    }
    firstDigit = temp;

    int sum = firstDigit + lastDigit;
    return sum;
}