#include<stdio.h>
void main()
{
	char str[20];
	int i=0,n=3;
	printf("enter the string:");
	scanf("%s",str);
   for(i=n;str[i]!='\0';i++)
   {
   	str[i]=str[i+1];
   }
   printf("modified string=%s",str);
}