#include<stdio.h>

void Factors_of_Number(int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			printf("%d ",i);
	}
	printf("\n");
}

int main()
{
	int n;
	printf("Enter the number - ");
	scanf("%d",&n);
	Factors_of_Number(n);
	return 0;
}
