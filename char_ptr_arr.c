#include<stdio.h>
int main()
{
	int i,j;
	char* arr[10];
	for(i=0;i<10;i++)
		for(j=0;j<10;j++) 
			scanf("%c",arr[i][j]);
	return 0;
}
