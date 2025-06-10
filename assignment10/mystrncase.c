#include <stdio.h>
void mystrcase(char* str,int);
void main()
{
	int n=3;
    char str[] = "ABOLI";
    mystrcase(str,n);
    printf("change case: %s\n", str);
    gets(str);
}

void mystrcase(char* str,int n)
{
    int i = 0;
    
    while (i<n&&str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')      
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
