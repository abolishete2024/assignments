#include <stdio.h>
int isperfect();
void main() {
if(isperfect()==1)
printf("number is perfect");
else
printf("number is not perfect");
}
 int isperfect(){
	int i=1, sum = 0, num;

    printf("Enter the number:\n");
    scanf("%d", &num);

    while(i<=num/2){
        if(num %i==0){
                sum=sum+i;
            }
            i++;
}
	if (sum == num) {
       return 1;
    } 
    return 0;
    }
    

