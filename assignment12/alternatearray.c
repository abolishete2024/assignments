#include <stdio.h>
#include<stdlib.h>
void printAlternateElements(int*, int);
void main() {
	int i;
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
       arr[i] = (int *)malloc(n * sizeof(int));

    printf("Alternate elements in the array:\n");
    printAlternateElements(arr, n);
}
void printAlternateElements(int arr[], int size) {
    for (int i = 0; i < size; i = i + 2) {
        printf("%d ", arr[i]);
    }
}
