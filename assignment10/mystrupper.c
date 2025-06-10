#include<stdio.h>
int mystrupper(char*);
void main()
{
	char str[]="aboli shete";
	mystrupper(str);
	printf("%s",str);
	gets(str);
}
int mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		
	str[i]=str[i]-32;	
	}
i++;
	}
}