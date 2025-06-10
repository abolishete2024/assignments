#include<stdio.h>
void main()
{
	char str1[20];
	char str2[20];
	int len1=0;
	int len2=0;
	printf("enter the string1:");
	gets(str1);
	printf("enter the string2:");
	gets(str2);
	while(str1[len1]!='\0')
	{
		len1++;
	}
	while(str2[len2]!='\0'){
		len2++;
		
	}
	if(len1>len2)
	printf("%s is longer string",str1);
	else if(len1<len2)
	printf("%s is longer string",str2);
	else
	printf("both strings are equal");
}