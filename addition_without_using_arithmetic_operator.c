// Addition of two number without using arithmetic operator

#include<stdio.h>

int Addition(int n,int m)
{
	if(m==0)
		return n;
	int sum = n ^ m;
	int carry = (n & m) << 1;
//	printf("%d  %d\n",sum,carry);
	return Addition(sum,carry);
}

int main()
{
	int n1,n2,res;
	printf("Enter the two numbers for addition - ");
	scanf("%d%d",&n1,&n2);
	res = Addition(n1,n2);
	printf("Addition of %d and %d is %d\n",n1,n2,res);
	return 0;
}
