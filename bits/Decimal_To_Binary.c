#include<stdio.h>

int Decimal_To_Binary(int num)
{
	int temp,i=0,j,r=0;
	if(num<=0)
		printf("Invalid Input\n");
	while(num)
	{
		int res=1;
		if(num%2==0)
			temp=0;
		else
			temp=1;
	
		num=num/2;
		for(j=0;j<i;j++)
			res=res*10;
		r=r+temp*res;
		i++;
	}
	return r;	
}

int main()
{
	int n,res;
	printf("Enter number - ");	
	scanf("%d",&n);
	res=Decimal_To_Binary(n);
	printf("%d\n",res);
	return 0;
}
