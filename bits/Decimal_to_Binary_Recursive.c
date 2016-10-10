#include<stdio.h>

int Decimal_to_Binary(int num)
{
	int r=0,res=1,j,i=0;
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
	{
		while(num)
		{
			for(j=0;j<i;j++)
				res=res*10;
			r=r+Decimal_to_Binary(num)*res;
			i++;
			num=num/2;
		}
	}
	return r;
}

int main()
{
	int num,res;
	printf("Enter the number - ");
	scanf("%d",&num);
	res=Decimal_to_Binary(num);
	printf("%d\n",res);
	return 0;
}
