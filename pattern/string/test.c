#include<stdio.h>
int main()
{
	int i=0;
	char arr[]="a3d5s2f4";
	while(arr[i]!='\0')
	{
		i++;
	}
	arr[i]=2;
	arr[i+1]='\0';
	i=0;
	while(arr[i]!='\0')
	{
		printf("%c ",arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}
