#include<stdio.h>

void right_half_triangle(int n)
{
	int i,j,k,l;
	k=n/2;
	for(i=0;i<k;i++)
	{
//		printf("%d",i);
		for(j=0,l=65;j<=i;j++,l++)
		{
			printf("%c",l);
		}
		printf("\n");
	}
	for(i=k;i>=0;i--)
	{
//		printf("%d",i);
		for(j=k,l=65;j>=0;j--,l++)
		{
			printf("%c",l);
		}
		printf("\n");	
		k--;
	}

}

int main()
{
	int n;	
	printf("Enter the number of rows - ");
	scanf("%d",&n);
	if(n%2==0)
		printf("Please enter odd number\n");
	else
		right_half_triangle(n);
	return 0;
}
