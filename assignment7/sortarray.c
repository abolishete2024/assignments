#include<stdio.h>
int main()
{
int arr[]={3,4,12,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,temp;
for(i=0;i<n-1;i++)
 {
 	for(j=0;j<n-i-1;j++)
 	{
 		if(arr[j]>arr[j+1])
 		{
 			temp=arr[j];
 			arr[j]=arr[j+1];
 			arr[j+1]=temp;
		 }
	}
 }	
 printf("sorted array: ");
 for(i=0;i<n;i++)
 {
 	printf("%d ",arr[i]);
 }
return 0;
}