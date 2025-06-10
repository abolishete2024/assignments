#include<stdio.h>
void leap(int year);
void main() {
	int year=2005;
   leap(year); 
}
void leap(int year){

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

}