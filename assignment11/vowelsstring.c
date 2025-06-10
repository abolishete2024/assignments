#include<stdio.h>
void main()
{
	int i=0,count=0;
	char str[]="DGFFX";
	while(str[i]!='\0')
	{
		if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
			
		}
		i++;
		
			
    }
    if(count==0)
     printf("vowel not found in string");
    else
   
    printf("%d vowels are present in %s",count,str);
}