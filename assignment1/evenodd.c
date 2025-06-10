#include<stdio.h>
void main()
{
	 evenodd();
}
void evenodd(){

    int no;
    printf("enter the number:");
    scanf("%d",&no);
    if(no%2==0){
        printf("number is even");

    }
    else{
        printf("number is odd");
    }
}
 prime();
 void prime();
 {
 	int no,i=2,flag=0;
    printf("enter the value of no:\n");
    scanf("%d",&no);
    while(i<no){

        if(no%i==0){
            flag=1;
            
            break;
        }
        i++;
		}
        if(flag==0){
            printf("number is prime=%d",no);
        }
        else{
            printf("number is not prime=%d",no);
        }
        
 }