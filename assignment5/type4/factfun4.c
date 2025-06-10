#include<stdio.h>
int getfact(int num);
void main() {
	int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
   int x= getfact(num);
    printf("Factorial is=%d",x);
}
int getfact(int num){
int fact = 1;
    int temp = num; 
    while(num) {
        fact=fact* num;
        num--;
    
    }
    return fact;
}
 
