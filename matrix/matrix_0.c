// if any row contains 0 then create entire row as 0
#include<stdio.h>
int main()
{
	int i,j,m,n,arr[10][10];
	printf("Enter number of rows and columns (m*n) - ");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
