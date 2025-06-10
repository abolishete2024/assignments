#include<stdio.h>
int mystrcmp(char*,char*);
void main()
{
char str1[]="aboli";
char str2[]="akki";	
int res=mystrcmp(str1,str2);
printf("%d",res);

}
int mystrcmp(char* str1,char* str2)
{
int flag;
for(int i=0;str1[i]!='\0';i++)
{
if(str1[i]==str2[i])
{
 flag=0;
}
else
return 1;	
}
return flag;
}