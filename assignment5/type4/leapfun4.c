#include<stdio.h>
int leap(int year);
void main() {
	int year=2005;
   if(leap(year)==1){
   	printf("%d is leap year",year);
   }
   else {
        printf("%d is not a leap year\n", year);
    }
}
int leap(int year){

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
     return 1;  
    } 
	else
	 {
     return 0;  
    }

}