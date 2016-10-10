#include<stdio.h>

void Bubble_Sort(int *arr,int n)
{
	int i,temp,j;
	for(j=1;j<n;j++)
	{
		for(i=0;i<j;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}

}

int main()
{
	int n,i,arr[10],arr_sorted[10];
	printf("Enter the number of elemets to be sorted - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	Bubble_Sort(arr,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
