#include <stdio.h>
void isperfect(int);
void main() {
	int num;
	 printf("Enter the number:\n");
    scanf("%d", &num);

  isperfect(num); 
}
 void isperfect(int num)
 {
 
 int i=1, sum = 0;

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