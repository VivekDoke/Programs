//Optimized code for checking prime number

#include<stdio.h>
#include<math.h>

int Check_Prime(int num)
{
        int i;
        if(num==0 || num<0)
                return -1;
        if(num==1 || num==2)
                return 1;
        for(i=2;i<=sqrt(num);i++)
        {
                if(num%i==0)
                {
                        break;
                }
        }
        if(i-1==num/2)
                return 1;
        else
                return 0;
}

int main()
{
        int num,test;
        printf("Enter the number - ");
        scanf("%d",&num);
        test=Check_Prime(num);
        if(test==-1)
                printf("%d is invalid Input\n",num);
        else if(test==0)
                printf("%d is not prime number\n",num);
        else
                printf("%d is prime number\n",num);
        return 0;
}

