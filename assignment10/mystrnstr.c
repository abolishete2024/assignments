#include <stdio.h>
char* mystrnstr(char* str, char* substr, int n);

void main()
{
    int n =8;
    char str[] = "AboliShete";
    char substr[] = "Shete";

    char* res = mystrnstr(str, substr, n);

    if (res != NULL)
        printf("Substring found at position: %d\n", res - str);
    else
        printf("Substring not found\n");
}

char* mystrnstr(char* str, char* substr, int n)
{
    int i, j;

    if (*substr == '\0')  
        return str;

    for (i = 0; str[i] != '\0' && i < n; i++)
    {
        for (j = 0; substr[j] != '\0'; j++)
        {

            if ((i + j) >= n || str[i + j] != substr[j])
                break;
        }

        if (substr[j] == '\0')
            return &str[i];  
    }

     return'\0';
}
