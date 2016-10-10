#include<stdio.h>

void Last_Word(char *inp, char *out)
{
	int i=0,count=0,c=0,j=0;
	while(inp[i]!='\0')
	{
		if(inp[i]==32)
			count++;
		i++;
	}
	while(inp[i-1]==32)
	{
		count--;
		i--;
	}
//	printf("%d\n",count);
	i=0;
	while(inp[i]!='\0')
	{
		if(inp[i]==32)
			c++;
		else if(count==c)
		{
				out[j]=inp[i];
				j++;
		}
		i++;
	}
	out[j]='\0';
		
}

int main()
{
	char line[50],output[50];
	printf("Enter the sentence - ");
	scanf("%[^\n]",line);
	Last_Word(line,output);
	printf("%s\n",output);
	return 0;
}
