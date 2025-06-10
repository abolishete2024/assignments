#include <stdio.h>
void main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Alternate elements in the array:\n");
    for (int i = 0; i < n; i=i+2) {
        printf("%d ", arr[i]);
    }

}
