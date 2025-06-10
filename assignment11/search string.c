#include<stdio.h>
void main()
{
	char str[20],ch;
	int i=0;
	printf("enter the string:");
	scanf("%s",str);
	printf("enter ch to search:");
	fflush(stdin);
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
		printf("%c is found in %s at %d",ch,str,i);
		}
		i++;
	}
}