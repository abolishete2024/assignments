#include<stdio.h>
int isprime(int num);
void main(){
	int no;
   if (isprime(no==1))
   printf("number is prime");
        else
            printf("number is not prime");
}
        int isprime(int num){
		int no,i=2,flag=0;
    printf("enter the value of no:\n");
    scanf("%d",&no);
    while(i<no){

        if(no%i==0){
            flag=1;
            
            break;
        }
        i++;}
        if(flag==0)
            {
            	return 1;
			}
			return 0;
    }

