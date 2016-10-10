#include<stdio.h>
#include<math.h>
void PrimeNo(int);

int main()
{
	int n;
	printf("Enter the count for prime number - ");
	scanf("%d",&n);
	PrimeNo(n);
	printf("\n");
	return 0;
}

void PrimeNo(int count)
{
	int i,j,flag=0,test=1,n=0;
	for(i=2;test<=count;i++)
	{
		for(j=1;j<=i;j++)
		{
	//		printf("%d %d\n",i,j);
			if(i%j==0)
				n++;	
		}
		if(n==2)
		{
			printf("%d\n",i);
			test++;
		}
		n=0;

	}

	
}
