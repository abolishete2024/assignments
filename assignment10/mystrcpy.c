#include<stdio.h>
int mystrcpy(char*,char*);
void main()
{
	char str1[]="aboli shete";
	char str2[20];
	mystrcpy(str1,str2);
	printf("%s",str2);
	gets(str1);
	
}
int mystrcpy(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
}