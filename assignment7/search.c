#include <stdio.h>

void main() {
int arr[20], n, i, num, flag = 0;

   printf("Enter number of elements: ");
   scanf("%d", &n);

 printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            flag= 1;
            break;
        }
    }
    if(flag)
        printf("%d is found at position %d.\n", num, i ); 
    else
        printf("%d is not found in the array.\n", num);


}
