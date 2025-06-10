#include <stdio.h>
void isperfect(int num);
void main() {
	 int num;
  printf("Enter the number:\n");
    scanf("%d", &num);
    isperfect(num);
}
void isperfect(num){
	int i=1,sum=0;
 while(i<=num/2){
        if(num %i==0)
		{
        sum=sum+i;
            }
            i++;
			}

    if (sum == num)
  printf("%d is perfect",num);
   else
	 printf("%d is not perfect",num);
}
	   
    
    

