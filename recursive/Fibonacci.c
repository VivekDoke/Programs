#include<stdio.h>

int fibonacci(int n)
{
	if(n==0 || n==1 ||n==2)	
		return 0;
	else if(n==3)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);

}

int main()
{	int num,res;
	printf("Enter the number - ");
	scanf("%d",&num);
	res=fibonacci(num);
	printf("The %dth fibonacci number is %d\n",num,res);
	return 0;
}
