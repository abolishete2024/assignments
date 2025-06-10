#include<stdio.h>
 void timeconvert();
void main(){
timeconvert();	
}
 void timeconvert(){
	int remmin,hour,totalmin;
    printf("enter the total minutes :\n");
    scanf("%d",&totalmin);
    hour=totalmin/60;
   remmin=totalmin%60;
   printf("After Conversion: hour=%d,remmin=%d",hour,remmin);
   
}