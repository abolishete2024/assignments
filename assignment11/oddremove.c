#include <stdio.h>
void main()
{
    char str[20];
    int i, j = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0) 
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; 

    printf("New string: %s\n", str);
}
