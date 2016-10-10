#include <stdio.h>

int check_distinct_word(char strg[], int len)
{
        int i,j,flag=1;
//        printf("len - %d\n",len);
        for(i=0;i<len;i++)
        {
                for(j=1;j<len;j++)
                {
                        
                        if(strg[i]==strg[j] && i!=j)
                        {
                                flag=0;
                        }
                        
                }
        }
        return flag;
}


int check_sorted_string(char str[],int len)
{
//	printf("hellp fun\n");
	int i=0,j=1,k=0,flag=0;
	while(i<len)
	{
		while(j<len)
		{
//			printf("%d %d %d %d\n",i,j,k,len);
			if(str[i]==str[j])
			{	
				k++;
			}
			i++;
			j++;
		}
		if(i==len-1 && j==len)
			break;
	}
//	printf("%d %d\n",k,len);
	if(k==len-1)
		flag=1;
	return flag;
}

int main()
{
/*	int i,fl;
	char a[10];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
	printf("\n");
	fl = check_sorted_string(a,i);
	printf("%d\n",fl);*/
    // Declare the variable
    	int a,i=0,j=1,k=0,len,l,ans[10],ch,c;
    	char str[10][10000];
    	scanf("%d", &a);
	for(i=0;i<a;i++)
		scanf("%s",str[i]);
	
	for(l=0;l<a;l++)
	{

		for(i=0;str[l][i]!='\0';i++)
		{
//			printf("%d ",str[l][i]);
		}
//		printf("\n");
		len=i;
		ch=check_sorted_string(str[l],len);
		if(ch)
		{
			ans[l]=0;
			continue;
		}
		c = check_distinct_word(str[l],len);
//		printf("C mer - %d\n",c);
		if(c==0)
		{
			printf("Input contain the multiple occurrances of word\n");
			return 0;
		}
		i=0;
		while(i<len)
		{
			while(j<len)
			{
				if(str[l][i]<str[l][j])
					k++;
//				else if(str[l][i]==str[l][j])
					
//			printf("i-%d j-%d k-%d\n",i,j,k);	
		
				i++;j++;
			}
//			printf("required= %d\n",len-k-1);
			ans[l]=len-k-1;
//			printf("ans[l]-%d\n",ans[l]);			
			if(i==len-1&&j==len)
				break;
		}
		j=1;
		k=0;
	}
//printf("--------------\n");
//	printf("%d\n",a);
	for(i=0;i<a;i++)
		printf("%d\n",ans[i]);
//  	printf("\n");
    
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted


    return 0;
}

