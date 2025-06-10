#include<stdio.h>
void sum();
void vowel();
void strong();

int main(){
	sum();
	vowel();
	strong();
}
void sum(){
	 int a,b,c;
     printf("enter the value of a and b:\n");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("sum=%d\n",c);
}
void vowel(){
	char alpha;
    printf("Enter an alphabet:\n");
    scanf(" %c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
        alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U') {
        printf("Given alphabet is a vowel:\n");
    }
    else if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) {
        printf("Given alphabet is a consonant:\n");
    }
    else {
        printf("Given input is not an alphabet:\n");
    }
	
}
void strong(){
	int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp= num;

    while (num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }

    if (sum == temp)
        printf("%d is a Strong number.\n", temp);
    else
        printf("%d is not a Strong number.\n", temp);

}



