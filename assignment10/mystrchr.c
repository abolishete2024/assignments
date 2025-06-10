#include <stdio.h>
char* mystrchr(char* str, char ch);
void main()
{
    char str[] = "AboliShete";
    char ch = 'o';

    char* result = mystrchr(str, ch);

    if (result != '\0')
        printf(" character  %c found at position: %d\n", ch, result - str);
    else
        printf("Character '%c' not found\n", ch);
}

char *mystrchr(char* str, char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return &str[i];  
        i++;
    }
 
}
