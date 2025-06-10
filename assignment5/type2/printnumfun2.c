#include<stdio.h>
int printnum();
void main(){
  printnum();  
}
int printnum(){

int num=1;
    printf("the numbers from 1 to 10 are:\n");
    while(num<=10){
        printf("%d\n",num);
        num++;
        }
        return num;
    }