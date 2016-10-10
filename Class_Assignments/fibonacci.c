#include<stdio.h>
void fibonacci(int n)
{
	int a=0;
	int b=1;
	if(n==0)
		printf("Invalid Input");
	else if(n==1)
		printf("0 1");
	else
	{
		printf("0 1 ");
		while(n)
		{
			int c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
			n--;
		}
		
	}

}

int main()
{
	int n;
	printf("Print upto what number you want to print fibonacci series - ");
	scanf("%d",&n);
	if(n<0)
		printf("Negative number..");
	else
		fibonacci(n);
	printf("\n");
	return 0;
}
