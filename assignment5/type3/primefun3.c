#include<stdio.h>
int isprime(int*);
void main(){
	int num;
	printf("enter the value of number:\n");
    scanf("%d",&num);
   isprime(&num);
}
        int isprime(int *num){
		int i=2,flag=0;
    
    while(i<*num){

        if(*num%i==0){
            flag=1;
            
            break;
        }
        i++;
		}
        if(flag==0)
            {
            printf("%d is prime",*num);
			}
			else{
			
			printf("%d is not prime",*num);
    }
}

