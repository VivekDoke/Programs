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
	int i,j,test=0;
	for(i=2;test<count;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			
		}
		if(i-1==i)
		{
			printf("%d\n",i);
			i++;
		}
	}
}
