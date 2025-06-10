#include<stdio.h>

int main(){
    int no1,no2;
    char op;
    printf("enter the values of no1,no2:\n");
    scanf("%d%d",&no1,&no2);
    printf("choose the desired operation");
    printf("+,-,*,/,%%:\n");
    fflush(stdin);
    scanf("%c",&op);
    if(op=='+'){
               int sum=no1+no2;
        printf("the addition is= %d:\n",sum);
    }
    else if(op=='-'){
         int sub=no1-no2;
 printf("the substraction is=%d:\n",sub);
    }
    else if(op=='*'){
         int mul=no1*no2;
        printf("the multiplication is=%d:\n",mul);
           }
           else if(op=='/'){
                int div=no1/no2;
            printf("the division is=%d:\n",div);
               }
               else if(op=='%')
               {
                    int mod=no1%no2;
                printf("the modulo is=%d:\n",mod);

               }
               else{
                    printf("invalid operation");
                    }
               getch();
}
