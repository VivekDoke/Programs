#include <stdio.h>

int main()
{

    	int a,i=0,j=1,k=0,len,l,ans[10];
    	char str[10][10000];
    	scanf("%d", &a);
	for(i=0;i<a;i++)
		scanf("%s",str[i]);
	
	for(l=0;l<a;l++)
	{
		for(i=0;str[l][i]!='\0';i++);
		len=i;
		i=0;
		while(i<len)
		{
			while(j<len)
			{
				if(str[l][i]<str[l][j])
					k++;

				i++;j++;
			}
			ans[l]=len-k-1;
			k=0;
			if(i==len-1&&j==len)
				break;
		}
		j=1;
	}
	for(i=0;i<a;i++)
		printf("%d\n",ans[i]);
	return 0;
}

