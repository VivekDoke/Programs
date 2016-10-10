//Input -  abc xyz pqr
//Output - cba zyx rqp

#include<stdio.h>

void reverse_each_word(char *inp,char *out)
{
	int i,j=5,k=0,t;
	for(i=0;inp[i]!='\0';i++)
	{
		while(inp[j]!=32)
		{
			out[k]=inp[j];
			j++;
			k++;
		}
	}
}

int main()
{
	char inp[20],out[20];
	printf("Enter the sentence - ");
	scanf("%[^\n]",inp);
	reverse_each_word(inp,out);
	printf("%s\n",out);
	return 0;
}
