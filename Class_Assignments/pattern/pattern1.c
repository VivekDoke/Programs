#include<stdio.h>
void pattern1(int n)
{
	int i,j;
	if(n<=0)
		printf("Invalid Input\n");
	for(i=0;i<n;i++)
	{	
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}

}

int main()
{
	int n;
	printf("Enter the rows for the pattern1 - ");
	scanf("%d",&n);
	pattern1(n);
	return 0;
}
