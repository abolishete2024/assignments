#include <stdio.h>
void mergearray(int*, int, int*, int);
void main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Merged array: ");
    mergearray(arr1, n1, arr2, n2); 

}
void mergearray(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1 + n2]; 

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
}
