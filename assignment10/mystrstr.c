#include <stdio.h>
char* mystrstr(char*,char* );
void main()
{
    char str[] = "AboliShete";
    char substr[] = "Shete";
     char* res= mystrstr(str, substr);
    if(res != '\0')
        printf("Substring found at position: %d\n", res-str);
    else
        printf("Substring not found ");
}

char* mystrstr(char* str, char* substr)
{
    int i, j;
     if (*substr == '\0') 
        return str;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; substr[j] != '\0'; j++)
        {
            if (str[i + j] != substr[j])
                break;
        }

        if (substr[j] == '\0') 
            return &str[i];
    }

  
}
