#include<stdio.h>
void main()
{
	char str[20];
	char ch=' ';
    int i=0;
    printf(" enter the string:");
   
    gets(str);
    while(str[i]!='\0')
    {
    if(str[i]==ch)
	{
		str[i]='#';
		}
		i++;	
	}
	printf(" new string=%s",str);
}