#include<stdio.h>
int voting();
void main(){
    if(voting()==1){
   	printf("person is eligible for vote");
   }
   else{
   	printf("person is not eligible for vote");
   }
voting();
}
int voting(){
	int age=5;
    if(age>=18){
   	return 1;
   }
   else{
   	return 0;
   }
}