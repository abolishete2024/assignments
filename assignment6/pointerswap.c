#include<stdio.h>
void swap(int*,int*);
void main()
{
	int no1=10,no2=20;
	swap(&no1,&no2);
		printf("after swap:no1=%d,no2=%d\n",no1,no2);
}
void swap(int *x,int *y){

int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}