#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int check_string(char *s,int len)
{
	int flag=0,i=0,j=2,count,k=0;
	if(len%2==0)
	{
//		count=len/2;
printf("count-%d len-%d\n",count,len);
		for(i=0;i<2;i++)
		{
			for(;j<len;j=j+2)
			{
			printf("i-%d j-%d k-%d\n",i,j,k);
				if(s[i]==s[j])
				{
					k++;
				}
			}
			j=3;
		}
printf("k %d\n",k);
			printf("hello\n");	
		if(k==len-2)
		{
printf("hello\n");
			flag=1;
		}

		return flag;		
	}
	else
	{
		printf("len is odd\n");
		return flag;
	}
}

int main(){
    	int len,res; 
    	scanf("%d",&len);
	if(len == 2)
	{
		printf("length cannot be 2\n");
		return 0;
	}
//	else if(len%2!=0)
//	{
//		printf("len is odd\n");
//		return 0;

//	}
    	char* s = (char *)malloc(512000 * sizeof(char));
    	scanf("%s",s);
	res=check_string(s,len);
	printf("res - %d\n",res);
    	return 0;
}
