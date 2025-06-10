#include<stdio.h>
void perim(float l,float w);
void main(){
	float l,w;
	printf("Enter the value of l and w:");
scanf("%f%f",&l,&w);
perim(l,w);
}
void perim(float l,float w){
float p;
p=2*(l+w);
printf("perimeter of rectangle=%f",p);
}