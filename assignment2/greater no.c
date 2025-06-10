#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(b>=c))
    {
        printf("a is greater");

    }
    else if((b>=c) &&(c>=a)){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }


}