#include<stdio.h>
void left_half_triangle(int n)
{
	int i,j,k,l,m;
	l=n/2;
	for(i=0;i<=l;i++)
	{
		for(j=l;j>=i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	m=l+1;
	for(i=0;i<=l+1;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=m;k++)
		{
			printf("*");	
		}
		m--;
		printf("\n");
	}

}

int main()
{
	int n;
	printf("Enter number of rows - ");
	scanf("%d",&n);
	if(n%2==0)
		printf("Enter odd number\n");
	else
		left_half_triangle(n-2);
	return 0;
}
