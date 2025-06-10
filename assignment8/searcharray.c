#include <stdio.h>
#include <stdlib.h>
void searcharray(int *, int , int);
int main() {
    int arr[20], n, num,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n); 
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);
    searcharray(arr, n, num);

} 

void searcharray(int *arr, int n, int num) {
    int flag = 0, i;

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            flag = 1;
            break;
        }
    }

    if(flag==0)
        printf("%d is  not found in array\n", num); 
    else
        printf("%d is  found in the array at position %d.\n", num,i);
}
