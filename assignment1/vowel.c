#include <stdio.h>

int main() {
    char alpha;
    printf("Enter an alphabet:\n");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
        alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
        printf("Given alphabet is a vowel\n");
    }
    else if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) {
        printf("Given alphabet is a consonant\n");
    }
    else {
        printf("Given input is not an alphabet\n");
    }

    return 0;
}
