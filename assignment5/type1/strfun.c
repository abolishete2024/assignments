#include<stdio.h>
int isstrong(int num);
int fact(int num);
void main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
int res=isstrong(num);
if(res==1)
printf("number is strong");
else
printf("number is not strong");
return 0;
}
int isstrong(int num)
{
	int temp=num,rem,sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum+fact(rem);
		num=num/10;
	
			}
			return (temp==sum);
		}
			int fact(int num)
			{
				int fact=1;
				for(int i=1;i<=num;i++)
				fact=fact*i;
				return fact;
			}


