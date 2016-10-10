#include<stdio.h>
void pattern3(int n)
{
	int i,j,k,t=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<t-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int main()
{
	pattern3(5);
	return 0;
}
