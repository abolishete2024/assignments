#include<stdio.h>
void isprime();
void main(){
    isprime();
        }
        void isprime(){
		
int no,i=2,flag=0;
    printf("enter the value of no:\n");
    scanf("%d",&no);
    while(i<no){

        if(no%i==0){
            flag=1;
            
            break;
        }
        i++;}
        if(flag==0){
            printf("number is prime=%d",no);
        }
        else{
            printf("number is not prime=%d",no);
        }
    }

