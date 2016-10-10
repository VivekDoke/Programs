#include <stdio.h>


int main()
{
    // Declare the variable
    	int a,i=0,j=1,k=0,len,l,ans[10];
    	char str[10][10000];
    	scanf("%d", &a);
	for(i=0;i<a;i++)
		scanf("%s",str[i]);
	
	for(l=0;l<a;l++)
	{
		for(i=0;str[l][i]!='\0';i++)
		{
			printf("%d ",str[l][i]);
		}
		printf("\n");
		len=i;
		i=0;
		while(i<len)
		{
			while(j<len)
			{
				if(str[l][i]<str[l][j])
					k++;
			printf("i-%d j-%d \n",i,j);	

				i++;j++;
			}
			printf("required= %d\n",len-k-1);
			ans[l]=len-k-1;			
			if(i==len-1&&j==len)
				break;
		}
		j=1;
	}

	printf("%d\n",a);
//	for(i=0;i<;i++)
//		printf("%s\n",str[i]);
//  	printf("\n");
    
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted


    return 0;
}

