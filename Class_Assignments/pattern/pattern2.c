#include<stdio.h>
void pattern2(int n)
{
	int i,j,k=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int main()
{
	int n;
	printf("Enter number of rows - ");
	scanf("%d",&n);
	pattern2(n);
	return 0;
}
