#include<stdio.h>
int mystrcat(char*,char*);
void main()
{
	char str1[30]="aboli shete";
	char str2[]="hii dear";
	mystrcat(str1,str2);
	printf("%s",str1);
	gets(str1);
}
int mystrcat(char* str1,char* str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';

}