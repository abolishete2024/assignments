#include <stdio.h>
void cubes();
void main() {
   cubes();
    }
void cubes(){
int num, square, cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    cube = num * num * num;
    printf("Square of %d is: %d\n", num, square);
    printf("Cube of %d is: %d\n", num, cube);

}