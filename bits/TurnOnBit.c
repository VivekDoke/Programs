#include<stdio.h>

int TurnBitPositionOn(int n,int p)
{
	int x=1;
	int res=n;
	x=x<<(p-1);
	if(!( x & n))
	{
		res= n | x;
	}
	return res;
}

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
	int number,position,res;
	printf("Enter the number - ");
	scanf("%d",&number);
	printf("\n%d\n",Decimal_To_Binary(number));
	printf("Enter the bit position - ");
	scanf("%d",&position);
	res=TurnBitPositionOn(number,position);
	printf("%d\n",Decimal_To_Binary(res));
	return 0;
}
