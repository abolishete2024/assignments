#include <stdio.h>
void mystrcase(char* str);
void main()
{
    char str[] = "Hii Dear Aboli";
    mystrcase(str);
    printf("change case: %s\n", str);
    gets(str);
}

void mystrcase(char* str)
{
    int i = 0;
    while (str[i] != '\0')
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
