#include<stdio.h>
void main()
{
	char str[20], temp;
	int n = 4;  
	printf("Enter the string: ");
	scanf("%s", str);
if (str[n] != '\0') {
		temp = str[0];
		str[0] = str[n];  
		str[n] = temp;
		printf("New string = %s\n", str);
	} 
	else 
	{
		printf("String is too short");
	}
}
