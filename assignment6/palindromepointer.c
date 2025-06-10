#include <stdio.h>
void ispalin(int*);
void main() {
	int num;
	printf("Enter an integer: ");
    scanf("%d",&num);
	ispalin(&num);
}
void ispalin(int* num){

int rev=0, rem,temp;
 
   temp= (*num);
    while ((*num) != 0) {
     rem = (*num) % 10;
     rev = rev * 10 + rem;
     (*num)= (*num)/10;
    }
    if (temp == rev){
     printf("%d is a palindrome.\n", temp);
    }
    else{
        printf("%d is not a palindrome.\n", temp);
    }
}