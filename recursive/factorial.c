#include<stdio.h>

int factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);

}

int main()
{
	int num,res;
	printf("Enter the number - ");
	scanf("%d",&num);
	res=factorial(num);
	printf("Factorial of %d is %d\n",num,res);
	return 0;
}
