#include<stdio.h>
void swap();
void main(){
  swap(); 

}
void swap(){

 int a,b,c;
    printf("enter the value of a and b: \n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a=%d,b=%d\n",a,b);
    
}