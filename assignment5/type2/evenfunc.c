#include<stdio.h>
int iseven();
void main(){
    if(iseven()==1)
    printf("number is even");
    else
    printf("number is odd");
}
int iseven(){
    int no;
    printf("enter the number:");
    scanf("%d",&no);
    if(no%2==0){
        return 1;
    }
      
else{
return 0;
}
    }
    

