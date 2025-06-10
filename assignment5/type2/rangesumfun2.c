#include <stdio.h>
int digits( );
void main() {
	int num;

  int x= digits();
  printf("%d",x);
    }
int digits()
{
	
int num,temp, firstDigit, lastDigit,sum;
printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = temp % 10;

    while (temp > 10) {
        temp = temp / 10;
    }
    firstDigit = temp;

    sum=firstDigit + lastDigit;
    return sum;

}