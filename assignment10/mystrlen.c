#include<stdio.h>
int mystrlen(char*);
void main()
{
char str[]="aboli";	
int res=mystrlen(str);
printf("%d",res);

}
int mystrlen(char* str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}