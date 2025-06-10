#include <stdio.h>
void mystrrev(char*);  
void main()
{
    char str[] = "aboli shete";  
    mystrrev(str);         
    printf("%s", str);
	gets(str);
	     
}

void mystrrev(char* str)
{
    int i = 0, j = 0;
    char temp;
    while (str[j] != '\0')
    {
        j++;
    }
    j = j - 1; 

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
