#include <stdio.h>
#include <string.h>
void reversestring(char *str);

void main() {
    char str[20]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    reversestring(str); 
}

void reversestring(char *str) {
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    char temp;
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);
}
