#include <stdio.h>
 void main() {
    int no, r1,q1, r2, r3, rev;

 printf("Enter a three-digit number: ");
    scanf("%d", &no);
    r1 = no % 10;  
    q1= no/10;      
    r2 = q1%10 ; 
    r3 = q1/10;       

    rev = r1 * 100 + r2 * 10 + r3;

    printf("Reverse of the number is: %d\n", rev);

    if (no == rev) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    
  }
