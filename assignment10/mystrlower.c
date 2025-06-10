#include<stdio.h>
int mystrlower(char*);
void main()
{
	char str1[]="ABOLI SHETE";
	mystrlower(str1);
	printf("%s",str1);
	gets(str1);
}
int mystrlower(char* str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]>='A'&&str1[i]<='Z')
		{
			str1[i]=str1[i]+32;
		}
		i++;
	}
}