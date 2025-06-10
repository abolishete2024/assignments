#include<stdio.h>
void voting(int age);
void main(){
	int age=45;
   voting(age);
}
void voting(int age){
    
    if(age>=18){
        printf("Eligible for vote");

    }
    else{
        printf("not eligible for vote");
    }
}