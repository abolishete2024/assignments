#include <stdio.h>
#include<stdlib.h>
void oddeven(int*,int);
void main()
 {
 	int i;
   int arr[] = {12, 7, 9, 24, 17, 6};  
   int n = sizeof(arr) / sizeof(arr[0]);
    arr[i] = (int *)malloc(n * sizeof(int));
oddeven(arr, n);
printf("Odd and Even Numbers in the Array:\n");
}
void oddeven(int arr[],int n)
{

    for (int i = 0; i < n; i++)
	{
    if (arr[i] % 2 == 0) 
	{
         printf("%d is Even\n", arr[i]);
    } 
		else 
		{
          printf("%d is Odd\n", arr[i]);
        }
    }
}
