#include <stdio.h>
#include<stdlib.h>
void minmax(int*, int , int *, int *);
void main() {
	int i;
    int arr[] = {12, 45, 2, 41, 31, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
       arr[i] = (int *)malloc(n* sizeof(int));
    int min=arr[0];
    int max = arr[0];
    minmax(arr, n, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}
void minmax(int arr[], int n, int *min, int *max) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}
