#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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

int Consecutive_Bits(int n){
   int rem=0,s=0,t=0;


    while(n>0)
        {
        rem=n%2;
        n=n/2;
        if(rem==1)
         {   s++;
           if(s>=t)

            t=s;

        }
        else{

            s=0;
        }   
    }
	return t;
}

int main(){
    int n,bin,c; 
    scanf("%d",&n);
    bin=Decimal_To_Binary(n);
    printf("%d\n",bin);
    c=Consecutive_Bits(bin);
    printf("%d\n",c);
    return 0;
}
