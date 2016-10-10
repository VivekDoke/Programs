#include<stdio.h>

int Decimal_To_Binary(int num)
{
        int temp,i=0,j,r=0,count=0;
//        if(num<=0)
//                printf("Invalid Input\n");
        while(num)
        {
                int res=1;
                if(num%2==0)
		{
                        temp=0;
		}
                else{
                        temp=1;
			count++;	
		}
                num=num/2;
                for(j=0;j<i;j++)
                        res=res*10;
                r=r+temp*res;
                i++;
        }
        return count;
}

int Change_Bit_Count(int n1,int n2)
{
	int or,c;
	or = n1 ^ n2;	//XOR operation
	c = Decimal_To_Binary(or);
	return c;
}

int main()
{
	int num1,num2,bin1,bin2,res;
	printf("Enter the two numbers - ");
	scanf("%d%d",&num1,&num2);
	res=Change_Bit_Count(num1,num2);
	printf("Count of changing bits is %d\n",res);
	return 0;
}
