#include<stdio.h>
int Check_Prime(int);
int main()
{
	int num,result;
	printf("Enter the number to check prime or not - ");
	scanf("%d",&num);
	result=Check_Prime(num);
	if(result==1)
		printf("is the prime number\n");
	else if(result==-1)
		printf("Invalid Number\n");
	else
		printf(" is Not prime number\n");
	return 0;
}

int Check_Prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n<=0)
			return -1;
		else if(n%i==0)
			return 0;
		else
			return 1;
	}


}
