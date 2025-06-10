#include <stdio.h>
void sumarray(int*, int);
void main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    sumarray(arr, n);
}

void sumarray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum =sum+ arr[i];
    }

    printf("Sum of all elements = %d\n", sum);
}
