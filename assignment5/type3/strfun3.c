#include<stdio.h>
void isstrong(int *num);
void factorial(int *num);
void main(){
	int num,sum=0;
	int temp=num;
	printf("Enter a number: ");
	scanf("%d",&num);
	isstrong(&num);
    factorial(&num);
    if(temp==sum)
			{
				printf("number is strong");
			}
			else{
				printf("number is not strong");
			}
}
void isstrong(int *num)
{
	int rem,sum=0,fact;
	while(num>0)
	{
		rem=num%10;
	   	  sum=sum+fact;
		num=num/10;
}
}
		
			void factorial(int num)
			{
				int fact=1;
				for(int i=1;i<=num;i++)
				fact=fact*i;
			}


