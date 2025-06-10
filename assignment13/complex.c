#include <stdio.h>

typedef struct Complex{
    int real;
    int imaginary;
   
} Complex;

void  main() {
 Complex arr[1];
 int i=0;
       
        printf("Enter the real: ");
        scanf("%d", &arr[i].real);

        printf("Enter the imaginary: ");
        scanf("%d", &arr[i].imaginary); 

    
        printf("complex number is given below:");
        printf("%d +", arr[i].real);
        printf(" %d i", arr[i].imaginary);
       
        
       
    }
