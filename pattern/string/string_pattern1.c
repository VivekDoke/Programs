#include<stdio.h>

int string_pattern(const char *src, char *dest,int lb,int ub)
{
	int i=0,j,k;
	while(src[i]!='\0')
	{
		for(j=lb-1,k=0;j<ub-1;j++,k++)
		{
			dest[k]=src[j];
		}
		i++;
	}
	dest[k]='\0';
	return *dest;
}

int main()
{
	int lb,ub;
	char src[20],dest[20];
	printf("Enter the string - ");
	scanf("%s",src);
	printf("Enter lower bound and uppr bound - ");
	scanf("%d %d",&lb,&ub);
	string_pattern(src,dest,lb,ub);
	printf("Output - %s\n",dest);
	return 0;
}
