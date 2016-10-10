#include<stdio.h>
void min_max(int[],int);
int main()
{
	int i ;
 	int n;
 	scanf("%d",&n);
 	printf("Enter number - ");
	int arr[n];
	for(i=0;i<n;i++)
 		 scanf("%d",&arr[i]);
	min_max(arr,n);
	return 0;
}

void min_max(int arr[],int size)
{
	int min,max,i;
	min=max=arr[0];
	for(i=0;i<size;i++)
   	if(arr[i]>min)
		max=arr[i];
   	else
		min=arr[i];
 	printf("Max - %d\nMin - %d\n",max,min);
}
