#include<stdio.h>
void percent();
void main(){
	percent();
    }
void percent()
{
	 float s1,s2,s3,s4,s5,total,per;
    printf("Enter the subject marks:\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    per=total/500*100;
    printf("per=%f",per);
    
}