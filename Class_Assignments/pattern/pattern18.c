/*
0 * * * * * *
1   * * * * *
2     * * * *
3       * * *
4         * *
5           *
*/
#include<stdio.h>

void pattern18(int n)
{
	int i,j,k,t=n;
//	for(i=0;i<n*2-1;i++)
//		printf("%d ",i+1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=t-1;j++)
			printf("%d ",j+1);
		for(k=0;k<2*(n+i);k++)
			printf(" ");
		for(j=t-1;j>=0;j--)
			printf("%d ",j+1);
		printf("\n");
		t--;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf("%d ",j+1);

		for(k=1;k<2*(n-i);k++)
			printf("  ");

		for(j=0;j<i;j++)
			printf("%d ",j+1);

		printf("\n");
	}
	for(i=0;i<n*2-1;i++)
		printf("%d ",i+1);

}

int main()
{
	int n;
	printf("Enter number of rows - ");
	scanf("%d",&n);
	pattern18(n);
	printf("\n");
	return 0;
}
