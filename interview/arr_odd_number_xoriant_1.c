#include<stdio.h>

int processArray(int array[],int len)
{
        int i=0,count=0,t=0,j=0;
        while(i<=len)
	{
		if(array[i]%2==0)
		{
			i++;
		}
		j=i;		
		while(array[j]%2!=0)
		{
			count++;
			j++;
		}
		array[i]=count;
		i++;
	}
        return i;
}

int main()
{
        int array[20],len,i=0;
        while(i<8)
        {
                scanf("%d",&array[i]);
                i++;
        }
        len = processArray(array,i-1);
        for(i=0;i<len;i++)
                printf("%d ",array[i]);
        printf("\n");
        return 0;
}

