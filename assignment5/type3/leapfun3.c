#include<stdio.h>
int leap();
int main() {
	int year=2008;
  if(leap()==1)
  	printf("%d is a leap year\n", year);
  else
  	printf("%d is not a leap year\n", year);
  
}
int leap(){
int year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } 
	else 
	{
        return 0;
    }

}