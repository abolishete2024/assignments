#include<stdio.h>
void printnum(int*);
void main(){
	int num;
  printnum(&num);  
}
void printnum(int *num){
*num=1;
    printf("the numbers from 1 to 10 are:\n");
    while((*num)<=10){
        printf("%d\n",*num);
        (*num)++;
        }
    
    }