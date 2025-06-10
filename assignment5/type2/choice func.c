#include <stdio.h>
void calculatePercentage();
void swapNumbers();
void calculateDiscount();

int main() {
    char ch;
    printf("Enter your choice (a: percentage, b: swap, c: discount): ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        calculatePercentage();
    } else if (ch == 'b') {
        swapNumbers();
    } else if (ch == 'c') {
        calculateDiscount();
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
    
void calculatePercentage() {
    float s1, s2, s3, s4, s5, total, per;
    printf("Enter the marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    per = (total / 500) * 100;
    printf("Percentage = %.2f%%\n", per);
}

void swapNumbers() {
    int a, b, temp;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}


void calculateDiscount() {
    int price, discount = 0;
    char student;

    printf("Enter the price: ");
    scanf("%d", &price);
    printf("Are you a student (y/n)? ");
    scanf(" %c", &student);

    if (student == 'y') {
        if (price > 500)
            discount = 0.2 * price;
        else
            discount = 0.1 * price;
    } else if (student == 'n') {
        if (price > 600)
            discount = 0.15 * price;
    } else {
        printf("Invalid student status\n");
        return;
    }

    price = price - discount;
    printf(" price after discount = %d\n", price);
}


