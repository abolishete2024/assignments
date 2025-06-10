#include<stdio.h>
#include<math.h>
int isarmstrong(int num);
int getcount(int num);
int power(int rem,int count );


void main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	isarmstrong(num);
}
 int isarmstrong(int num){
	int temp=num;
	int count=getcount(temp);
	int sum=0; 
	while(temp>0){
	int rem=temp%10; 

	int power(int rem,int count);
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(num==sum) printf("number is armstrong");
	else printf("number is not armstrong");
	return 0;
	
}
 int getcount(int temp){
	int count=0;
	while(temp>0){
	temp=temp/10;
	count++;
	
	}
	return count;	
}
int power(int rem,int count){
	for(int i=1;i<=count;i++){
		int	pow=pow*rem;
		}
		return power;
	}

