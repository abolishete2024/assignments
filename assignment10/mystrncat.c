#include<stdio.h>
int mystrncat(char*,char*,int);
void main()
{
	int n=4;
	char str1[30]="aboli shete";
	char str2[]="welcome";
	mystrncat(str1,str2,n);
	printf("%s",str1,n);
	gets(str1);
}
int mystrncat(char* str1,char* str2,int n)
{
	int i=0,j=0;
	while(i<n&&str1[i]!='\0')
	i++;
	while(j<n&&str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';

}