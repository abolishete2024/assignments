#include<stdio.h>
void main()
{
char str[100];
int i=0,count=0;
printf("enter the string: ");
gets(str);
while(str[i]==' ')
i++;
while(str[i]!='\0')
{
	if(str[i]==' '&& str[i+1]!=' '&& str[i+1]!='\0')
	{
		count++;

	}
	i++;
	}
	if(str[0]==' '||str[0]=='\0')
	
	printf("string is empty");
	else
	printf("there are %d words in %s",count+1,str);
}
