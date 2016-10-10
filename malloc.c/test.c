#include "malloc.h"
#include<stdio.h>
#include<stdlib.h>
void Display(int *mallocptr,int size)
{
	int n;
	for(n=0;n<size;n++)
	{
		printf("%d ",mallocptr[n]);
	}
}

int main()
{
	int *mallocptr, *callocptr;
	int n,i;
	printf("Enter the number - ");
	scanf("%d",&n);
	mallocptr = malloc(n*sizeof(int));
	if(mallocptr == NULL)
	{
		printf("Unable to memory allocate\n");
		exit(-1);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&mallocptr[i]);
	}
	Display(mallocptr,n);
	printf("\n");
	return 0;
}
