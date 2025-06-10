#include<stdio.h>
int mystrncpy(char*,char*,int);
void  main()
{
	char str1[]="aboli shete hii dear";
	char str2[30];
	mystrncpy(str2,str1,15);
	printf("%s",str2);
	gets(str2);
	
}
int mystrncpy(char* str2,char* str1,int n)
{
	int i=0;
	while(i<n&&str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	
}