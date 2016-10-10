#include<stdio.h>

int chacking(char *str,int len)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=len;j>=0;j--)
		{
			printf("%d %d",i,j);
//			if(str[i]==str[j])
		}
	}

}

int main()
{
	int res,i;
	char str[20];
	printf("Enter the brackets - ");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++);
	res=chacking(str,i-1);
	if (res==1)
		printf("Correct\n");
	else
		printf("Incorrect\n");
	return 0;
}
