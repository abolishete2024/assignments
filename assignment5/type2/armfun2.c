#include<stdio.h>
int isarmstrong();
void main(){

if(isarmstrong()==1)
		printf("number is armstrong");
	else
	printf("number is not armstrong");
}
	
	int isarmstrong(){
   int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int temp=num;
	int count=0;
	while(temp>0){
	temp=temp/10;
	count++;
	}
	
	temp=num;
	int sum=0; 
	while(temp>0){
	int rem=temp%10;
		int pow=1;
	for(int i=1;i<=count;i++){
			pow=pow*rem;
		}
		sum=sum+pow;
		temp=temp/10;
	}
   if(num==sum){
   return 1;
}
else {
return 0;
}
}
