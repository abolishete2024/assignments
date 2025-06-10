#include <stdio.h>
int ispalindrome(int num);
void main() {
	int num;
   if(ispalindrome(num)==1)
   printf("number is palindrome");
   	else
   	printf("number is not palindrome");
   }
    int ispalindrome(int num){
    	int rev=0, rem,temp;
    	printf("Enter an integer: ");
    scanf("%d", &num);
   temp= num;
    while (num != 0) {
     rem = num % 10;
     rev = rev * 10 + rem;
     num= num/10;
 }
    if (temp == rev){
	 return 1;
 }
 else{
 return 0;
   }
}
