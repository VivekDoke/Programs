#include<stdio.h>
int DigitsCount(int n)
{
	static int count=0;
	if(n>=0 && n<=9)
	{
		count++;
		return count;
	}
	else	
	{
		DigitsCount(n/10);
		count++;
	}
}

int main()
{
	int num,digits;
	printf("Enter the number - ");
	scanf("%d",&num);
	digits=DigitsCount(num);
	printf("Number of digits in %d is %d\n",num,digits);
	return 0;
}
