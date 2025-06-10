#include<stdio.h>
int voting(int age);
void main(){
	int age=5;
   if(voting(age)==1){
   	printf("person is eligible for vote");
   }
   else{
   	printf("person is not eligible for vote");
   }
}
int voting(int age){
    
    if(age>=18){
        return 1;

    }
    else{
        return 0;
    }
}