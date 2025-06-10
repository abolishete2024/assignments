#include <stdio.h>

int main() {
float da, ta, hra, basicsalary, totalsalary;

 printf("Enter the basic salary: ");
 scanf("%f", &basicsalary);

 if (basicsalary <= 5000) {
     da = 0.10 * basicsalary;
 ta = 0.20 * basicsalary;
    hra = 0.25 * basicsalary;
    } else {
     da = 0.15 * basicsalary;
  ta = 0.25 * basicsalary;
     hra = 0.30 * basicsalary;
    }

totalsalary = basicsalary + da + ta + hra;
 printf("Total salary is: %.2f\n", totalsalary);

    
}
