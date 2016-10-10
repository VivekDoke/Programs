//	* * * *
//	* * *
//	* *
//	*



#include<stdio.h>
void pattern4(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-i;j++)
			printf("* ");
	printf("\n");
	}

}

int main()
{
	int n;
	printf("Enter number of rows - ");
	scanf("%d",&n);
	pattern4(n);
	return 0;
}
