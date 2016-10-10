#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<10;i++)
	{
		for(j=2;j<i;j++)
		{
			printf("%d %d\n",i,j);
		}
	}
	printf("\n");
	return 0;
}
