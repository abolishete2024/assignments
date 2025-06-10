#include<stdio.h>
int main(){
    int remmin,hour,totalmin;
    printf("enter the total minutes :\n");
    scanf("%d",&totalmin);
    hour=totalmin/60;
   remmin=totalmin%60;
   printf("After Conversion: hour=%d,remmin=%d",hour,remmin);
   return 0;
   
}