#include<stdio.h>

int Count_Words_from_String(char *st)
{
	int i=0,count=1,j=0,k=0;
	if(st[i]==32)
	{
		while(st[i+1]==32)
			i++;
		count--;
	}		
	while(st[i]!='\0')
	{
		if(st[i]==32)
		{
			while(st[i+1]==32)
				i++;
			count++;	
		}
		
		i++;
	}
	if(st[i-2]==32)
	{
		while(st[i-2-j]==32)
			j++;
		count--;
	}
 	return count;
}

int main()
{
	int count,i;
	char str[50];
	printf("Enter the string - ");
	scanf("%[^\n]",str);
	count=Count_Words_from_String(str);
	printf("The words in string are - %d\n",count);
}
