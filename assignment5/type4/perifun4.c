#include<stdio.h>
float perim(float l,float w);
void main(){
	float l,w;
	printf("Enter the value of l and w:");
scanf("%f%f",&l,&w);
float x=perim(l,w);
	printf("perimeter of rectangle is %f",x);

}
float perim(float l,float w){
float p;
p=2*(l+w);
return p;
}