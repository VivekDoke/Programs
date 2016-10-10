#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,size,i;
	printf("Enter the size of the array you want to create - ");
	scanf("%d",&size);
	arr=(int *)malloc(size *sizeof(int));
	if(arr==NULL)
	{
		printf("Memory allocation function failed");
		exit(1);
	}
	else
	{
		printf("Cong..");
	}
	for(i=0;i<size;i++)
	{
		arr[i]=10*(i+1);
	}
	printf("Elemets of the array are\n");
	for(i=0;i<size;i++)
		printf("%d\n",arr[i]);
	free(arr);
	return 0;
}
