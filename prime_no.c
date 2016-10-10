//Prime number list

#include<stdio.h>

int main()
{
	int i,j,counter,n=0,k=0;
	printf("Enter number of prime elements are required - ");
	scanf("%d",&counter);
	for(i=2;k<counter;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			n++;
		}
		if(n==2)
		{
			printf("%d ",i);
			k++;
		}	
		n=0;
	}
	printf("\n");
	return 0;
}
