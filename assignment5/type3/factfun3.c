#include<stdio.h>
int getfact(int num);
void main() {
	int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
   getfact(num);
 
}
int getfact(int num){
int fact = 1;
    int temp = num; 
    while(num) {
        fact=fact* num;
        num--;
    
    }
    printf("the factorial of %d is %d",temp,fact);
}
 
