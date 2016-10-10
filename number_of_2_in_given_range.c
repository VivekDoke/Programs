// Number of 2's in given range (0 to n)

#include<stdio.h>

int numberof2s(int num)
{
	int count=0;
	while(num)
	{
		if(num%10==2)
			count++;
		num=num/10;
	}
	return count;
}

int main()
{
	int n,i,count=0;
	printf("Enter the range upto count - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		count+=numberof2s(i);
	printf("Count of 2's in range from 0 to %d is %d\n",n,count);
	return 0;
}
