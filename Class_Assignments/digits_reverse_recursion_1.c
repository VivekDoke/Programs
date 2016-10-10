#include<stdio.h>

int ReverseNumber(int n)
{
	int i=0,num,rev=0,digit=0;
	while(n)
	{
		digit=n%10;
		n=n/2;
		rev=rev*10+digit;
	}
	return rev;
}

int main()
{
        int num,revnum;
        printf("Enter the number - ");
        scanf("%d",&num);
        revnum=ReverseNumber(num);
        printf("Number of digits in %d is %d\n",num,revnum);
        return 0;
}
